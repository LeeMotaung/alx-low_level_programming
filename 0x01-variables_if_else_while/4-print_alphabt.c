
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
char lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase == 'e' && lowercase == 'q')
{
lowercase++;
}
else
{
putchar(lowercase);
lowercase++;
}
}
putchar('\n');
return (0);
}

