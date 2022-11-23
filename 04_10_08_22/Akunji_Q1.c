/*Given an unsorted dynamic array arr and two numbers x and y, find the minimum distance
between x and y in arr. The array might also contain duplicates. You may
assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.*/

//#include <limits.h>
#include <stdio.h>
#include <stdlib.h> 

int minDist(int arr[], int n, int x, int y)
{
  int i, j, max;
  int min_dist = max;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if ((x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j]) && min_dist > abs(i - j)) 
            {
        min_dist = abs(i - j);
      }
    }
  }
  if (min_dist > n) {
    return -1;
  }
  return min_dist;
}

int main()
{
  int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 3;
  int y = 6;

  printf("\nMinimum distance between %d and %d is %d\n", x,  y, minDist(arr, n, x, y));
  return 0;
}