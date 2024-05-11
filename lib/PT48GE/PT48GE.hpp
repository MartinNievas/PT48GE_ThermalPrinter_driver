#ifndef __PT48GE_HPP__
#define __PT48GE_HPP__
#include <stddef.h>

namespace PT48GE
{
    class PT48GE
    {
    private:
        int dst_pin = 16;
        int latch_pin = 17;
        unsigned int line_buffer[12] = {0};
        void (*move_motor_function_ptr)(void);

    public:
        PT48GE(/* args */);
        void initialize(void);
        void pin_sequence(void);
        void set_move_motor_function(void (*move_motor_function)(void));
        void write_buffer_pixel_index(unsigned int);
        void print_pixel_from_array(const unsigned char *imagen, size_t image_size);

        void clear_printer(void);
        ~PT48GE();
    };
}

#endif