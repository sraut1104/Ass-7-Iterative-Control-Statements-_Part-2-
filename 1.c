// 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int n,i=1,a=0,b=1,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        while(i<=n/2-1)
        {
            c=a+b;
            a=c;
            b=b+c;
            i++;
        }
        printf("%d",b);
    }
    else
    {
        while(i<=n/2)
        {
            c=a+b;
            a=c;
            b=b+c;
            i++;
        }
        printf("%d",a);
        //printf("%d",c);
    }

    return 0;

}
