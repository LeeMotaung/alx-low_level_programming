#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
*Return: always 0 (sucess)
*/
int main(void)
{
char  lowercase = 'z';
while (lowercase >= 'a')
{
putchar(lowercase);
lowercase--;
}
putchar('\n');
return (0);
}

