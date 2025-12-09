
#include <stdio.h>

int main()
{
   float r=15.58971;
    int integral;
    float fractional;
    
    integral= (int)r;
    fractional= r-integral;
   
   printf("The integral part is %d",integral);
   printf("\n The fractional part is %.4f",fractional);

    return 0;
}
