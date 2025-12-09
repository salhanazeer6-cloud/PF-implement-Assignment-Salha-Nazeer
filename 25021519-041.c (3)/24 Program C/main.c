
#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    
    printf("Enter the marks of five subjects  ");
    scanf("%d %d %d %d %d",&m1 ,&m2, &m2, &m3, &m4, &m5);
    
    total=m1+m2+m3+m4+m5;
    average=total/5;
    
    printf("\ntotal marks=%d",total);
    printf("\naverage=%f",average);

    return 0;
}
