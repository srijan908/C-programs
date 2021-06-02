#include<iostream>

using namespace std;

int main ()
{
    int arr[] = {1,2,3,4,5};

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    int *p;
    p = new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    cout<<"\n";

    for(int i=0;i<5;i++)
        cout<<p[i]<<" ";

    delete p;
}
