
#include <stdio.h>

int main()
{
    int rollNo;
    int PF,ITC,CG;
    int Total;
    float average;
    
    printf("Enter the rollNo: ");
    scanf("%d",&rollNo);
    
    printf("\nEnter the marks of PF: ");
    scanf("%d",&PF);
    
    printf("\nEnter the marks of ITC: ");
    scanf("%d",&ITC);
    
    printf("\nEnter the marks of CG: ");
    scanf("%d",&CG);
    
    Total=PF+ITC+CG;
    average=Total/3.0;
    
    printf("\nThe Total marks are %d",Total);
    printf("\nThe average is %f",average);
    
     return 0;
}
