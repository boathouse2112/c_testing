#include <stdio.h>

int printf_asm(char *fmt_string, int number);

int main(void)
{
    char *fmt_string = "Your number: %d\n";
    int number = 3;

    printf_asm(fmt_string, number);
    printf("Done.");

	return 0;
}
