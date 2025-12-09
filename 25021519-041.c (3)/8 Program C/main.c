
#include <stdio.h>

int main()
{
    float farh,cel;
    
    printf("Enter the temp in farh %f ");
    scanf("%f",&farh);
    
    cel=(farh-32)*5.0/9.0;
    
    printf("The temp in cel is %f",cel);
    
    return 0;
}
