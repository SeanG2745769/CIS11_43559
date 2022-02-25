#include "pico/stdlib.h"

int main() 
{
    const uint zero  = 0;
    const uint one   = 2;
    const uint two   = 3;
    const uint three = 4;
    const uint four  = 5;

    gpio_init(zero);
    gpio_set_dir(zero, GPIO_OUT);
    gpio_init(one);
    gpio_set_dir(one, GPIO_OUT);
    gpio_init(two);
    gpio_set_dir(two, GPIO_OUT);
    gpio_init(three);
    gpio_set_dir(three, GPIO_OUT);
    gpio_init(four);
    gpio_set_dir(four, GPIO_OUT);

    int time = 200;
    while(true)
    {
        gpio_put(zero, true);
        sleep_ms(time);
        gpio_put(zero, false);
        gpio_put(one, true);
	sleep_ms(time);
        gpio_put(one, false);
        gpio_put(two, true);
        sleep_ms(time);
        gpio_put(two, false);
        gpio_put(three, true);
        sleep_ms(time);
        gpio_put(three, false);
        gpio_put(four, true);
        sleep_ms(time);
        gpio_put(four, false);

    }
}