// 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("All Prime numbers between %d an %d :\n");
    for(i=a+1;i<b;i++)
    {
       for(j=2;j<i;j++)
            if(i%j==0)
                break;
        if(i==j)
        printf("%d\t",i);
    }

    return 0;
}