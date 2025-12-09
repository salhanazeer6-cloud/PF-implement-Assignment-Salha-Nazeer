
#include <stdio.h>

int main()
{
    int a,b,c;
    int disc;
    
    printf("Enter the value of a: ");
    scanf("%d",&a);
    
    printf("Enter the value of b: ");
    scanf("%d",&b);
    
    printf("Enter the value of c: ");
    scanf("%d",&c);
    
    disc=(b * b) - (4 * a* c);
    printf("The value of disc is %d",disc);
    
    return 0;
}
