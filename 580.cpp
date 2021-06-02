#include<bits/stdc++.h>
using namespace std;

int fin(int n)
{
    vector<int> nums(n);
    vector<int> ans;
    int temp=0;
    cin>>nums[0];
    if(n==1)
        return 0;
    for(int i=1;i<n;i++){
        cin>>nums[i];
        if(nums[i]>=nums[i-1]){
            temp++;
        }
        if(nums[i]<nums[i-1] || i==n-1){
            ans.push_back(temp);
            temp=0;
        }
    }
    return *max_element(ans.begin(),ans.end());
}

int main()
{
    int n;
    cin>>n;

    int y = fin(n);

    cout<<y+1;
}
