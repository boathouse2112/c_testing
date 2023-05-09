#include <stdio.h>

int printf_asm(char *fmt_string, int number);

void print_args(char *arg1, int arg2) {
    printf("arg1: %s, arg2: %d\n", arg1, arg2);
}

int main(void)
{
    char *fmt_string = "Your number: %d\n";
    int number = 3;

    printf("arg1: %s, arg2: %d\n", fmt_string, number);
    printf_asm(fmt_string, number);
    printf("Done.");

	return 0;
}
