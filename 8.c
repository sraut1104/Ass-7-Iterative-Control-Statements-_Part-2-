// 8. Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter a numbers: ");
    scanf("%d",&a);
    for(i=a+1;i<32767;i++)
    {
       for(j=2;j<i;j++)
            if(i%j==0)
                break;
        if(i==j)
        {
           printf("%d",i);
           break;
        }

    }

    return 0;
}