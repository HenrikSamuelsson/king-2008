#include <stdio.h>

#define ANSWER 42  // Named constant instead of magic number

int main(void)
{ int unused = ANSWER;  // clang-tidy should warn: unused variable 'unused'
    printf("hello, world\n");
    int x = 1; // Another unused variable that should give a warning
}
