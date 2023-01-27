#include <stdio.h>
/**
* * Description: main - Print the size of various types.
* * Return: 0 if success
*/
int main(void)
{
printf("Size of an int: %d bytes \n", sizeof(int));
printf("Size of a long int: %d bytes \n", sizeof(long int));
printf("Size of a float: %d bytes \n", sizeof(float));
printf("Size of a long long int: %d bytes \n", sizeof(long long int));
printf("Size of a char: %d bytes \n", sizeof(char));
return (0);
}
