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
int a = '0';
int b = '0';
int c = '0';
while (a <= '7')
{
while (b <= '8')
{
while (c <= '9')
{
if (a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (!(a == '7' && b == '8' && c == '9'))
{
putchar(',');
}
}
c++;
}
b = '0';
b++;

}
c = '0';
a++;
}
putchar('\n');
return (0);
}

