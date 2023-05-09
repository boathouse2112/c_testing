#include <stdio.h>

int add_2(int addend);

int main(void)
{
    int n = 1;
    int n_plus_2 = add_2(n);
    printf("Original: %d, Plus2: %d", n, n_plus_2);

	return 0;
}
