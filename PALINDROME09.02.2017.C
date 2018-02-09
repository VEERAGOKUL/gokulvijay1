#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,revers_b;
 printf("Enter the number:\n);
 scanf("%d",&a);
 while(a>10)
 {
  b=a%10;
  revers_b=revers_b*10+b;
  a/1+10;
  }
  if(a==revers_b)
  {
   printf("palindrome");
   }
   else
   {
   printf(Not palindrome");
   }
   getch();
   return 0;
   }

