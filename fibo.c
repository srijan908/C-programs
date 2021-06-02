#include<stdio.h>

int f[10];

int fib1(int n)
{
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    if (n>1)
        return fib1(n-2)+fib2(n-1);
}

int fib2(int n)
{
    int a = 0;
    int b = 1;

    if (n==0)
        return 0;
    if (n==1)
        return 1;
    if(n>1)
    {
        for (int i=0;i<n-1;i++)
        {
            b = b+a;
            a = b-a;
        }
        return b;
    }
}

int fib3(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
            f[n-2]=fib3(n-2);
        if(f[n-1]==-1)
            f[n-1]=fib3(n-1);
        return f[n-2]+f[n-1];
    }
}

void main()
{
    for(int i=0;i<10;i++)
        f[i] = -1;

    int a = fib3(5);
    printf("%d",a);
}
