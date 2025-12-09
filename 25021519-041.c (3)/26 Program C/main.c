
#include <stdio.h>

int main()
{
   float rupees;
   float dollars;
   
   printf("Enter money in rupees  ");
   scanf("%f",&rupees);
   
   dollars= rupees/60.0;
   printf("dollars=%.2f",dollars);
   
    return 0;
}
