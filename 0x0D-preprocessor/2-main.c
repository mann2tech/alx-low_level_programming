#include <stdio.h>

/*
 * main - prints the name of the file compiled from
 *
 * Return: ok
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
