#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
*main entry
*Always return 1
*/
<<<<<<< HEAD
int main(void){
write(1, "and that piece of art is useful
\" - Dora Korpar, 2014-10-19\n", 59);
return (1);
=======
int main(void)
{
  write(1,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
  return(1);
>>>>>>> 57fb97d91399baaa8c2cfe2a384e6d264205f5c4
=======
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
>>>>>>> 289c7226d17c74122f9f6fda57b6c80c4f94d5dd
}
