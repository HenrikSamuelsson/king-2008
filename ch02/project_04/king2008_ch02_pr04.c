/*
 * Solution to Programming Project 2 in Chapter 4 of:
 *
 * King, K. N. (2008). C Programming: A Modern Approach (2nd ed.).
 *
 * Takes an amount and calculates the amount with 5 percent tax added.
 */
#include <stdio.h>

int main(void) {
    printf("Enter an amount: ");

    float amount;
    scanf("%f", &amount);

    float tax = 0.05 * amount;
    printf("With tax added: %.2f\n", amount + tax);

    return 0;
}