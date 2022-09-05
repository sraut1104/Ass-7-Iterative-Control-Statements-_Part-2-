// 9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int t,s=0,a,i;
    for(i=1,a=num;a!=0;i++)
    {
        t=a%10;
        s=s+t*t*t;
        a=a/10;
    }
    if(s==num)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");

    return 0;
}
