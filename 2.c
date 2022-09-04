// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
    int n,i=1,a=0,b=1,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n/2)
    {
        printf("%d\t%d\t",a,b);
        c=a+b;
        a=c;
        b=b+c;
        i++;

    }
    if(n%2!=0)
        //printf("%d",c);
         printf("%d",a);



    return 0;
}