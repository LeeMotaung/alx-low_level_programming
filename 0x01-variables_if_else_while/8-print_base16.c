
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
int num;
char b = 'a';
num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
while (b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}

