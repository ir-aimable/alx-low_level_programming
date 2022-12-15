<<<<<<< HEAD
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

 while (i < 10)
 {
 putchar(i);
 }

 printf("Infinite loop avoided! \\o/\n");

 return (0);
}
=======
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

while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
>>>>>>> c6c4d0040b52d06774f747fdb6b63130f1c176af
