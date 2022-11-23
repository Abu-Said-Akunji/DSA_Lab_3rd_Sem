//12.WAP to add two distances (in km-meter) by passing structure to a function.

#include <stdio.h>

struct Distance {
   int km;
   float m;
} d1, d2, result;

int main() {
 
   printf("Enter 1st distance\n");
   printf("Enter Kilometer: ");
   scanf("%d", &d1.km);
   printf("Enter Meter: ");
   scanf("%f", &d1.m);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter Kilometer: ");
   scanf("%d", &d2.km);
   printf("Enter Meter: ");
   scanf("%f", &d2.m);

   result.km = d1.km + d2.km;
   result.m = d1.m + d2.m;

   while (result.m >= 1000.0) {
      result.m = result.m - 1000.0;
      ++result.km;
   }
   printf("\nSum of distances = %dkm-%.1fm", result.km, result.m);
   return 0;
}