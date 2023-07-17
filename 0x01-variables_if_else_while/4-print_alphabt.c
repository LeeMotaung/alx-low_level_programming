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
char i;
for (i = 0; i < 10; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');
return (0);
}

