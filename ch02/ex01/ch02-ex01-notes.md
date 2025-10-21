# 2.1 – Exercise 1 – Hello, world

## ❓ Question

Create and run Kernighan and Ritchie’s famous *“hello, world”* program.

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

**Follow‑up in the book:** “Do you get a warning message from the compiler? If so, what’s needed to make it go away?”

## 📝 Solution

Store the above snippet in a file called `ch02-ex01.c`

Build and run in a terminal, such as Powershell. Here is an example based on using GCC on Windows (MinGW‑w64) with C23:

```powershell
> gcc -std=c23 ch02-ex01.c -o ch02-ex01.exe
> .\ch02-ex01.exe
hello, world
```

No warnings are emitted. This is expected: since C99, *falling off the end of `main`* is defined to return `0` implicitly, so compilers don’t need to warn.

## 🎯 Answer

- No compiler warnings are issued for `main` under modern C (C99+), because an implicit `return 0;` is assumed if control reaches the end of `main`.
- To ensure consistent intent, add the explicit `return 0;` at the end of  `main` before the last `}`.

## 📑 References

King, K. N. (2008). C Programming: A Modern Approach (2nd ed.). W. W. Norton.

## 🏷 Tags

#c #gcc #king-2008
