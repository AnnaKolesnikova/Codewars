#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int *distinct(const int *values, size_t count, size_t *pResultCount);
// Please make sure you store the number of distinct values
// in the memory pointed to by pResultCount. If values == NULL
// or count == 0, then *pResultCount == 0.

int *distinct(const int *values, size_t count, size_t *pResultCount)
{
    int *result;
    result = (int *)calloc(count, sizeof(int));
    size_t new_count = 0;
    for (size_t i = 0; i < count; i++)
    {
        int add_next = 1;
        for (size_t j = 0; j < new_count; j++)
        {
            if (result[j] == values[i])
            {
                add_next = 0;
                break;
            }
        }
        if (add_next == 1)
        {
            result[new_count] = values[i];
            new_count += 1;
        }
    }
    *pResultCount = new_count;
    return (result);
}