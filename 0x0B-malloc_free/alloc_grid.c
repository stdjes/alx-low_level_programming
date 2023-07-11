/**
 * alloc_grid - creates a 2 dimensional array of integers, and
 * allocates it to a new memory space
 * @width: Width of the array grid
 * @height: Height of the array grid.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int r, c;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		matrix[r] = malloc(width * sizeof(int));
		if (matrix[r] == NULL)
		{
			for (i = 0; i < r; i++)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			matrix[r][c] = 0;
	}

	return (matrix);
	free(matrix);
}
