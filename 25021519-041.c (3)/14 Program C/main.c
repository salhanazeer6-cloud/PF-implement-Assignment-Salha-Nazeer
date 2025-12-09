
#include <stdio.h>

int main()
{
   float milimeters,inches;
   
   printf("Enter value in milimeters ");
   scanf("%f",&milimeters);
   
   inches=milimeters/25.4;
   printf("The value in inches is %.2f",inches);

    return 0;
}
