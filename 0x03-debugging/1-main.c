#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    
    /* Commented out loop, remove/comment the newline and putchar lines within if not needed */
    /*
    while (i < 10)
    {
        putchar(i);
    }
    */
    
    printf("Infinite loop avoided! \\o/\n");
    return (0);
}
