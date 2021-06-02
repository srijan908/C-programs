#include <bits/stdc++.h>
using namespace std;

/* vector<int> calc(int n){

    if(n==3){
        vector<int> vect; 
        vect.push_back(1); 
        vect.push_back(1); 
        vect.push_back(1); 
        return vect;
    }
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    int sum=1;

    while(sum!=n){
        sum +=nums[nums.size()-2];
        nums.push_back(sum);
    }
    
    sum = 0; vector<int> ans; int counter = nums.size()-1;
    
    while(sum!=n && ans.size()<=3){
        int temp = nums[counter-1];
        if(sum+temp==n && ans.size()<2){
            counter--;
            continue;
        }
        ans.push_back(temp);
        sum+=temp;
        counter--;
    }
    return ans;
} */

int main(){
    long n;
    cin>>n;

    /* vector<int> ans = calc(n);
    for(int i = 2;i>=0;i--)
        cout<<ans[i]<<" "; */

    cout<<"0 0 "<<n;
}