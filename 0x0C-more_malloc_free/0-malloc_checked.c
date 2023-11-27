##include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory with malloc
 * @b: number for byte will be allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
