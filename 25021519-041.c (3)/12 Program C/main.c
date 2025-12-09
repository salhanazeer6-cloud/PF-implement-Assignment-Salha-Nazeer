
#include <stdio.h>

int main()
{
   float radius, height, volume,PI;
   
   printf("Enter the redius of cylinder ");
   scanf("%f",&radius);
   
    printf("Enter the height of cylinder ");
    scanf("%f",&height);
    
    volume= PI*radius*radius*height;
    
    printf("The volume of cylinder is %.2f",volume);
   
    return 0;
}