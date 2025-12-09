
#include <stdio.h>

int main()
{
    int a=10, b=16, temp;
    temp=a;
    a=b;
    b=temp;
    
    printf("The value of a after interchange %d \n",a);
    printf("The value of b after interchange %d \n",b);

    return 0;
}