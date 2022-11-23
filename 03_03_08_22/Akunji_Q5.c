/*5. WAP to read a number and delete the even location digit of that number.Example : 
i) input 1234. output is 13.
ii) input 357 output is 37
iii) input 7637272 output is 7322 */

#include <stdio.h>

int dlt_even_digit(int number)
{
    int r, result = 0, i = 1, j = 1; 
    while (1) 
    {
        if (number)
        {
            r = number % 10;
            number = number / 10;
            if (i % 2 != 0)
            {
                result += r * j;
                j *= 10;
            }
            i++; 
        }
        else
            break;
    }
    return result;
}
int main()
{
    long int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The number after deleting even digits: %d", dlt_even_digit(n));
    return 0;
}