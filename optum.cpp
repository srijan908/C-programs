#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculate(int pos, int prev,int arr[], int n)
{
	// Base Case
	if (pos == n) {
		return 1;
	}

	

	int answer = 0;
	
	int num=0;
	for (int i = pos; i <n; i++)
    {
      	num=num*10+ arr[i];
      if(num>prev)
      {answer += calculate(i + 1, num, arr,n);}
	}
	return answer;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;cin>>n;
    int num;cin>>num;
    int arr[n];
    for(int i=n-1;i>=0;i--)
    {arr[i]=num%10;
    num=num/10;
    
    }
   // for(int i=0;i<n;i++)
   // {
   //     cout<<arr[i];
    //}
    cout << calculate(0,0,arr,n)<<endl;
    
    return 0;
}