#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(0, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(5, 1 ,2, 3, 4, 5);
    printf("%d\n", sum);    
    return (0);
}
