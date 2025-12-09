
#include <stdio.h>

int main()
{
    int hours, minutes, seconds;
    printf("Enter time in hours:");
    scanf("%d",&hours);
    
    printf("\nEnter time in minutes:");
    scanf("%d",&minutes);
    
    printf("\nEnter time in seconds:");
    scanf("%d",&seconds);
    
    seconds=(minutes*60)+(hours*3600)+seconds;
    printf(" \ntime in seconds=%d",seconds);
    
    return 0;
}
