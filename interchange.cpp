#include<iostream>

using namespace std;

int main()
{
    string abc;
    cout<<"Enter the string ";
    cin>>abc;

    int j;

    for(j=0;abc[j]!='\0';j++)
    {
        continue;
    }

    for(int i=0;i<j;i++,j--)
    {
        char c = abc[i];
        abc[i]=abc[j-1];
        abc[j-1]=c;
    }

    cout<<abc;
}
