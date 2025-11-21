/*
 * Program from King, K. N. (2008). C Programming: A Modern Approach (2nd ed.).
 * Chapter 2, Programming Project 2.
 *
 * Computes the volume of a sphere with a 10-meter radius.
 */
#include <stdio.h>

int main(void) {
    const float radius = 10.0f;
    const float volume = (4.0f / 3.0f) * 3.14159f * radius * radius * radius;

    printf("The volume of a sphere with a 10-meter radius is %.1f\n", volume);

    return 0;
}
