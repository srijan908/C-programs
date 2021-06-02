#include<stdio.h>

int fun (int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else if (p%2==0) {
        return fun(n*n,p/2);
    }
    else {
        return n*fun (n*n,p/2);
    }
}
void main ()
{
    int a = fun(2,4);
    printf("%d",a);
}
