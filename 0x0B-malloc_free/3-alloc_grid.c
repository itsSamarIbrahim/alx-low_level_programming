#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a 2D array of integers
 * @width: the rows
 * @height: the columns
 * Return: a pointer to a 2-dimensional array of integers or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **_2D_array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	_2D_array = (int **)malloc(sizeof(int *) * width);

	if (_2D_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		_2D_array[i] = (int *)malloc(sizeof(int) * width);
		if (_2D_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(_2D_array[i]);

			free(_2D_array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; i < j; j++)
			_2D_array[i][j] = 0;
	}

	return (_2D_array);
}
