#include<stdio.h>        
int main()
{
    int x,y,a,b;
    scanf("%d %d",&a,&b);
    x=x^y;               // a=a+b                   
    y=x^y;              // b=a-b;                    
    x=x^y;              // a=a-b;
    printf("%d %d",x,y);
    return 0;
}
