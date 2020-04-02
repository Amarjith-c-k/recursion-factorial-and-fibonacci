//factorial of a number without using recursion
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
    int f=1,i;
        for(i=1;i<=n;++i)
            {
           f *=i;
            }
    return f;
}
