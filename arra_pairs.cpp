#include<iostream>

using namespace std;

int main ()
{
    int n = 6;
    int k = 5;
    int arr[] = {1,2,3,4,5,6};
    int pairs = 0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
         {
            int sum = arr[i]+arr[j];
            if(sum%k==0)
            {
                pairs++;
                cout<<arr[i]<<","<<arr[j]<<" ";
            }
         }
         cout<<"\n";
    }

    cout<<pairs;
}
