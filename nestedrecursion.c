#include<stdio.h>

int fun(int n)
{
    if (n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}

void main ()
{
    int a = fun(95);
    printf("%d",a);
}
