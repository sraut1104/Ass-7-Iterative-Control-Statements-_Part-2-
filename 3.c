/* 3. Write a program to check whether a given number is there in the Fibonacci series or not. */

#include<stdio.h>

int main()
{
    int n,i=1,a=0,b=1,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=32767)
    {
        if(n==a || n==b)
        {
            printf("A term in Fibonacci series");
            break;
        }

        c=a+b;
        a=c;
        b=b+c;
        i++;

    }
    if(n!=a && n!=b)
    {
        printf("Not a term in Fibonacci Series");
    }


    return 0;
}