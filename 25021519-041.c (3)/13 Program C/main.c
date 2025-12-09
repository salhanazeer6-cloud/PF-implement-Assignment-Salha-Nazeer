
#include <stdio.h>

int main()
{
    float radius,PI;
    float area;
    
    printf("Enter the radius of circle ");
    scanf("%f",&radius);
    
    area=PI*radius*radius;
    
    printf("The area of circle is %.2f",area);

    return 0;
}