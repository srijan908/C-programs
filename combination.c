#include<stdio.h>

int C(int c, int r)
{
    if(r==0 || c==r)
        return 1;
    return C(c-1,r-1)+C(c-1,r);
}

int main()
{
    printf("%d",C(4,2));
}
