//factorial of a number using recursion
#include<stdio.h>
int fct(int n);
int main()
{
    int n,f;
    printf("enter the number to find factorial \n");
    scanf("%d",&n);
    f=fct(n);
    printf("factorial of %d is %d",n,f);
    return 0;
}
int fct(int n)
{
    if(n>1)
        return n*fct(n-1);
    else
        return n;
}

