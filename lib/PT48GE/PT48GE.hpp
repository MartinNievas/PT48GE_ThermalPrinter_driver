#ifndef __PT48GE_HPP__
#define __PT48GE_HPP__
#include <stddef.h>
#define PT48GE_BUFFER_SIZE 384
#define PT48GE_CHAR_BUFFER_LENGTH 48

namespace PT48GE
{
    class PT48GE
    {
    private:
        int dst_pin = 16;
        int latch_pin = 17;
        unsigned char *gBuffer = nullptr;
        unsigned int line_buffer[12] = {0};
        void (*move_motor_function_ptr)(void);
        unsigned int char_to_index(unsigned char character);
        void insert_character(unsigned char character, unsigned int index);
        void print_gBuffer(void);
        void clear_gBuffer(void);

    public:
        PT48GE(/* args */);
        void initialize(void);
        void pin_sequence(void);
        void set_move_motor_function(void (*move_motor_function)(void));
        void write_buffer_pixel_index(unsigned int);

        void print_pixel_from_array(const unsigned char *imagen, size_t image_size);
        void print_text(const char *text);

        void clear_printer(void);
        ~PT48GE();
    };
}

#endif