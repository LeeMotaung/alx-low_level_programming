#include <stdlib.h> #include <time.h> #include <stdio.h>
/* main- Deterine the last digit and tell if it is greater, less , equal*/
/* Return-Always 0(success) */
int main(void)
{
int n;
int lastdig;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdig = n  % 10;
if (lastdig > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);   
else if (lastdig == 0)
printf("Last digit of  %d is %d and is 0/n", n, lastdig)
else if (lastdig < 6 && lastdig !=0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
return (0);
}
