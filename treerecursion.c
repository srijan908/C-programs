#include<stdio.h>

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d",n);
        fun(n-1);
    }
}

void main()
{
    fun(3);
    return 0;
}
