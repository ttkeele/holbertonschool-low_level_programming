#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0
 * @width: width of the 2-dimensional array
 * @height: height of the 2-dimensional array
 *
 * Return: if width <= 0, height <= 0, or the function fails - NULL
 *         else - a pointer to the 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **Deetoo;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	Deetoo = malloc(sizeof(int *) * height);

	if (Deetoo == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		Deetoo[hgt_index] = malloc(sizeof(int) * width);

		if (Deetoo[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(Deetoo[hgt_index]);

			free(Deetoo);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			Deetoo[hgt_index][wid_index] = 0;
	}

	return (Deetoo);
}
