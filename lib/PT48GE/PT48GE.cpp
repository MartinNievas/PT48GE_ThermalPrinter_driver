#include <Arduino.h>
#include <SPI.h>
#include <PT48GE.hpp>

namespace PT48GE
{
    PT48GE::PT48GE(/* args */)
    {
    }

    void PT48GE::initialize(void)
    {
        SPI.begin();

        // Config SPI speed
        SPI.setClockDivider(SPI_CLOCK_DIV16);

        // Config pins
        pinMode(dst_pin, OUTPUT);
        pinMode(latch_pin, OUTPUT);

        // Initialize pins to default state
        digitalWrite(SS, HIGH);
        digitalWrite(dst_pin, LOW);
        digitalWrite(latch_pin, HIGH);
    }

    void PT48GE::set_move_motor_function(void (*move_motor_function)(void))
    {
        move_motor_function_ptr = move_motor_function;
    }

    void PT48GE::pin_sequence(void)
    {
        delayMicroseconds(10);
        digitalWrite(latch_pin, LOW);
        delayMicroseconds(10);
        digitalWrite(latch_pin, HIGH);
        delayMicroseconds(30);
        digitalWrite(dst_pin, HIGH);
        delayMicroseconds(100);
        digitalWrite(dst_pin, LOW);
    }

    void PT48GE::write_buffer_pixel_index(unsigned int index)
    {

        // reset line buffer
        for (int i = 0; i < 12; ++i)
            line_buffer[i] = 0;
        unsigned int char_index = index % 32;
        unsigned int line_index = index / 32;
        line_buffer[line_index] |= (0x1 << char_index);

        for (int i = 12; i >= 0; --i)
            SPI.write32(line_buffer[i]);
    }

    void PT48GE::print_pixel_from_array(const unsigned char *imagen, size_t image_size)
    {

        size_t image_index = 0;
        while (image_index < image_size - 48)
        {
            for (unsigned int j = 0; j < 20; ++j)
            {
                for (int i = 0; i < 48; ++i)
                {
                    SPI.write(imagen[image_index + i]);
                }
                pin_sequence();
                move_motor_function_ptr();
            }
            image_index += 48;
        }
    }

    void PT48GE::clear_printer(void)
    {
        // Ultima parte de la imagen en blanco
        for (int i = 0; i < 48; ++i)
        {
            SPI.write(0x00);
        }
        pin_sequence();
    }

    PT48GE::~PT48GE()
    {
    }

}