#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int[] a, int x)
{
    // Making sure our array a is sorted, the algorithm starts by taking minimum and maximum array index.
    int low = 0;
    int high = a.length - 1;
    int mid;

    while (low <= high)
    {
        // For this usage we have to make sure that our length is pair. Since to take the midle "node" we need to divide low index + high index by two;
        mid = (low + high) / 2;
        // If our value is on the left half, than we consider that one as our "new" array;
        if (x > a[mid])
        {
            low = mid + 1;
        }
        else if (x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1; // Error. Element not found.
}

int recursiveBinarySearch(int[] a, int x, int low, int high)
{
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (x > a[mid])
        {
            low = mid + 1;
            return recursiveBinarySearch(a, x, low, high);
        }
        else if (x < a[mid])
        {
            high = mid - 1;
            return recursiveBinarySearch(a, x, low, high);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}