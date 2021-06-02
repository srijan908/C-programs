#include<stdio.h>

int fun (int n)
{
    if (n==0) {
        return 1;
    }
    else {
        return fun(n-1)*n;
    }
}

void main ()
{
    int a = fun(5);
    printf("%d",a);
}
