#include<iostream>

using namespace std;

int main ()
{
    int *p = new int[5];

    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    int *n = new int[10];

    for(int i=0;i<5;i++)
        n[i]=p[i];
    delete p;

    p = n;
    n = NULL;

    for(int i=0;i<5;i++)
        cout<<p[i]<<" ";
}
