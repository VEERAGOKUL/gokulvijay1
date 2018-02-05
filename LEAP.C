#include<stdio.h>
#include<conio.h>
int main()
{
 int year;
 printf("Enter the year to check if it is leap year\n");
 scanf("%d",&year);
 if(Year%400==0)
 printf("%d is a leap year",year);
 else if(Year%100==0)
 printf("%d is not leap year",year);
 else if(Year%4==0)
 printf("%d is a leap year",year);
 else
 printf("%d is a leap year",year);
 getch();
 return 0;
 }
