#include <stdio.h>
/**
* main - Prints lowercase alphabets
* Return: Zero on success.
*/

int main(void)
{
    char c;

    for(c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar ('\n');
    return 0;
}
