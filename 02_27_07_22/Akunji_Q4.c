//4.WAP to sort a dynamic array of n numbers. 
 
#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
    int *ip, n, i, temp; 
     
    printf("\nEnter the number of elements you want to insert : "); 
    scanf("%d", &n); 
    ip = (int *)malloc(n * sizeof(int)); 
    for (i = 0; i < n; i++) 
    { 
        printf("Enter element %d : ", i + 1); 
        scanf("%d", &ip[i]); 
    } 
    printf("\nThe Inputed Array:\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("\n%d", ip[i]); 
    } 
    for (i = 0; i < n; i++) {      
        for (int j = i+1; j < n; j++) {      
           if(ip[i] > ip[j]) {     
               temp = ip[i];     
               ip[i] = ip[j];     
               ip[j] = temp;     
           }      
        }  
    }     
 
    printf("\n");     
            
    printf("Elements of array sorted in ascending order: \n");     
    for (int i = 0; i < n; i++) {      
        printf("%d ", ip[i]);     
    }     
    return 0;; 
}