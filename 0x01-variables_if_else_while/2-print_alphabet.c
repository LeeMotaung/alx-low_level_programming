
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main- prints the alphabet in lowercase*/
/* Return-Always 0(success) */
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}
