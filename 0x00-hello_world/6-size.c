#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
*this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	char i;
	int j;
	long int k;
	long long int m;
	float n;

	printf("size of a char: %lu byte(s)", sizeof(i));
	printf("size of an int: %lu byte(s)", sizeof(j));
	printf("size of a long int: %lu byte(s)", sizeof(k));
	printf("size of a long long int: %lu byte(s)", sizeof(m));
	printf("size of a float: %lu byte(s)", sizeof(n));
	return (0);
}
