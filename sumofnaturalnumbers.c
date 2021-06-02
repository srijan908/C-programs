#include<stdio.h>

int sum = 0;
void fun (int n)
{
    if(n>0)
    {
        sum += n;
        fun(n-1);
    }
}

void main ()
{
    fun(20);
    printf("%d",sum);
}
