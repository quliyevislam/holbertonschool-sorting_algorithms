#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: intiger array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t index_min_element;

	while (i < size)
	{
		j = i;
		index_min_element = i;

		while (j < size)
		{
			if (array[i] > array[j])
				index_min_element = j;

			if (index_min_element != i)
			{
				array[i] = array[i] + array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j];
			}

			j++;
		}

		print_array(array, size);
		i++;
	}
}
