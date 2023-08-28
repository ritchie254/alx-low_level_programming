#include "main.h"
#include <stdio.h>

int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};

	print_diagsums((int *)c3, 3);
	return (0);
}
