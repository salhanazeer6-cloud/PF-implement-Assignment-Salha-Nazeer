
#include <stdio.h>

int main()
{
   float miles,kilometers;
   
   printf("Enter the distance in miles: ");
   scanf("%f",&miles);
   
   kilometers= miles*1.609;
   
   printf("the distance in kilometers is %.2f",kilometers);
    return 0;
}
