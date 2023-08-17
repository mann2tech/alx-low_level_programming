#include "function_pointers.h"

/**
 * array_iterator - executes given function as a parameter on each element of array
 * @array: array to execute function
 * @size: array size
 * @action: pointer to act on
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
	i	action(array[i]);
	}
