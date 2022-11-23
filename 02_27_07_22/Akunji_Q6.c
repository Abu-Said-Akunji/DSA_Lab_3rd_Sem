/*  6.Given a dynamic array, WAP to print the next greater
element (NGE) for every element. The next greater element for an element
x is the first greater element on the right side of x in array.
Elements for which no greater element exist, consider next greater
element as -1. E.g. For the input array [2, 5, 3, 9, 7], the next
greater elements for each elements are as follows.


Element             NEG


2                         5
5                         9
3                         9
9                         -1
7                         -1    */


#include<stdio.h>
#include<stdlib.h>

void NGE(int array[], int n)
{
  int next, i, j;
    printf("Element\t\tNGE");
  for (i = 0; i < n; i++)
  {
    next = -1;
    for (j = i + 1; j < n; j++)
    {
      if (array[i] < array[j])
      {
        next = array[j];
        break;
      }
    }
    printf("%d\t\t%d\n", array[i], next);
  }
}

int main()
{
  int array[] = {2, 5, 3, 9, 7};
  int n = sizeof(array)/sizeof(array[0]);
  NGE(array, n);
  return 0;
}