
#include <stdio.h>

int main()
{
   int age;
   float height;
   char gender;
   char name[5];
   
   printf("Enter the age of student :");
   scanf("%d",&age);
   
   printf("Enter the height of student :");
   scanf("%f",&height);
   
   printf("Enter the gender of student :");
   scanf("%ch",&gender);
   
   printf("Enter the name of student :");
   scanf("%ch",&name);
   
   return 0;
}
