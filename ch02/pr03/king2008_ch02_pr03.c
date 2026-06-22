/*
 * Solution to Programming Project 3 in Chapter 2 of:
 *
 * King, K. N. (2008). C Programming: A Modern Approach (2nd ed.).
 *
 * Computes the volume of a sphere with a radius given by the user.
 */
#include <stdio.h>

int main(void) {
    printf("Enter radius of sphere in meters: ");

    float radius = 0.0f;
    if (1 != scanf("%f", &radius)) {
        printf("Invalid input\n");
        return 1;
    }

    float volume = (4.0f / 3.0f) * 3.14159f * radius * radius * radius;
    printf("The volume of the sphere is %.1f cubic meters\n", volume);

    return 0;
}
