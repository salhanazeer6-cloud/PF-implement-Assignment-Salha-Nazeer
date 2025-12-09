
#include <stdio.h>

int main()
{
    int a=10,b=11,temp;
    
    temp=a;
    a=b;
    b=temp;
    
    printf(" The value of a after interchange: %d",a);
    printf(" The value of b after interchange: %d",b);
    
    return 0;
}
