//2.WAP to test whether a number n is palindrome number or not using function.

#include<stdio.h>

void Palindrome(int numb)
{
    int temp, remainder, rev=0;
    temp = numb;  
    while( numb!=0 )
    {
        remainder = numb % 10;
        rev = rev*10 + remainder;
        numb /= 10;
    }   
    if ( rev == temp ) 
        printf("\n%d is a palindrome number.\n", temp);
    else
        printf("\n%d is not a palindrome number.\n", temp);
}

int main()
{
  int num;

  printf("\nEnter the number you want to check: ");
  scanf("%d", &num);
  Palindrome(num);
  return 0;
}