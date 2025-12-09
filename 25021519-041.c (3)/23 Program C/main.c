
#include <stdio.h>

int main()
{
    float radius;
    float area,circumference;
    
    printf("Enter the radius ");
    scanf("%f",&radius);
    
    area=3.1416* radius* radius;
    circumference=2* 3.14168* radius;
    
    printf("\n The area of circle is %.2f",area);
    printf("\n The circumference of circle is %.2f",circumference);
    
     return 0;
}
