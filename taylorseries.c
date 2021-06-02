#include<stdio.h>

double fun (int x, int n)
{
    static double p = 1;
    static double f = 1;
    static double sum;

    if(n == 0)
        return 1;

    sum = fun (x,n-1);
    p *= x;
    f *= n;
    return sum+p/f;
}

void main()
{
    printf("%lf",fun(1,10));
}

