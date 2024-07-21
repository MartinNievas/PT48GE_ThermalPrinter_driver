#include <Arduino.h>
#include "fonts.hpp"
#include <SPI.h>
#include <PT48GE.hpp>
extern unsigned char ucFont[];

namespace PT48GE
{
    PT48GE::PT48GE(/* args */)
    {
    }

    unsigned int PT48GE::char_to_index(unsigned char character)
    {
        return (character - 32) * 8;
    }

    void PT48GE::insert_character(unsigned char character, unsigned int index)
    {

        // Look for the index of the character in the font
        unsigned int index_start = char_to_index(character);

        for (size_t i = 0; i < 8; ++i)
        {
            gBuffer[index + i * PT48GE_CHAR_BUFFER_LENGTH] = ucFont[i + index_start];
        }
    }

    void PT48GE::print_gBuffer(void)
    {
        for (size_t i = 0; i < 8; ++i)
        {
            // Repeat 100 times to make the text more visible
            for (size_t repeat = 0; repeat < 60; ++repeat)
            {
                for (size_t j = 0; j < PT48GE_CHAR_BUFFER_LENGTH; ++j)
                {
                    SPI.write(gBuffer[i * PT48GE_CHAR_BUFFER_LENGTH + j]);
                }
                pin_sequence();
                move_motor_function_ptr();
            }
        }
    }

    void PT48GE::clear_gBuffer(void)
    {
        for (size_t i = 0; i < PT48GE_CHAR_BUFFER_LENGTH * 8; ++i)
        {
            gBuffer[i] = 0;
        }
        pin_sequence();
        for (size_t i = 0; i < 100; ++i)
        {
            clear_printer();
            move_motor_function_ptr();
        }
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

        // Allocate memory for the text buffer
        // 48 characters of: 8x8 bits
        gBuffer = (unsigned char *)malloc(PT48GE_CHAR_BUFFER_LENGTH * 8);
    }

    void PT48GE::set_move_motor_function(void (*move_motor_function)(void))
    {
        move_motor_function_ptr = move_motor_function;
    }

    void PT48GE::set_power(unsigned int power){
        _strobe_duration_ms = power;
    }

    void PT48GE::pin_sequence(void)
    {
        delayMicroseconds(10);
        digitalWrite(latch_pin, LOW);
        delayMicroseconds(10);
        digitalWrite(latch_pin, HIGH);
        delayMicroseconds(30);
        digitalWrite(dst_pin, HIGH);
        delayMicroseconds(_strobe_duration_ms);
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
        while (image_index < image_size - PT48GE_CHAR_BUFFER_LENGTH)
        {
            for (unsigned int j = 0; j < 20; ++j)
            {
                for (int i = 0; i < PT48GE_CHAR_BUFFER_LENGTH; ++i)
                {
                    SPI.write(imagen[image_index + i]);
                }
                pin_sequence();
                move_motor_function_ptr();
            }
            image_index += PT48GE_CHAR_BUFFER_LENGTH;
        }
    }

    void PT48GE::print_text(const char *text)
    {
        size_t col_index = 0;
        for (size_t i = 0; i < strlen(text); ++i)
        {
            if (col_index < PT48GE_CHAR_BUFFER_LENGTH)
            {
                insert_character(text[i], col_index);
                col_index++;
            }
            else if (col_index == PT48GE_CHAR_BUFFER_LENGTH)
            {
                print_gBuffer();
                clear_gBuffer();
                col_index = 0;
            }
        }
        if (col_index > 0)
        {
            print_gBuffer();
            clear_gBuffer();
        }
    }

    void PT48GE::clear_printer(void)
    {
        // Ultima parte de la imagen en blanco
        for (int i = 0; i < PT48GE_CHAR_BUFFER_LENGTH; ++i)
        {
            SPI.write(0x00);
        }
        pin_sequence();
    }

    PT48GE::~PT48GE()
    {
    }

}