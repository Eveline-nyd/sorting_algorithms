#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort(array, size);
}


