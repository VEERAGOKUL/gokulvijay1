#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,count=0;
 scanf("%d",&a);
 int a,n,count=0;
 scanf("%d",&a);
 for(n=2;n<a;n++)
 {
 if(a%n==0)
 count++;
 }
 if(count==0)
 printf("prime number\n");
 else
 printf("not a prime number\n");
 getch();
 return 0;
 }
