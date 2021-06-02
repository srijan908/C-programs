#include<bits/stdc++.h>
using namespace std;
#define fo(i,k,n) for(long long i=k;i<n;i++)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

typedef long long ll;

/* ll fun_ceil(ll n,ll k){
if(n%k==0){
    return n/k;
}
else {
    ll x = (n/k)+1;
    return x;
}
} */
//sort(s.begin(),s.end(),[](tt x, tt y){return abs(x)>abs(y);});
int solve(vector<int>& nums, int k) {
    int max = 0;
    for(int i=0;i<nums.size();i++)
        if(nums[i]>max)
            max = nums[i];
            
    int arr[max+1] = {0};
    for(int i=0;i<nums.size();i++){
        arr[nums[i]]++;
    }
    int count = 0;
    for(int i=0;i<=max;i++){
        if(count==k)
            return i;
        if(arr[i]==1)
            count++;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> s;
    int arr[] = {5, 3, 8, 2, 0};
    for(int i:arr)
        s.pb(i);
    int k = solve(s,2);
    cout<<k;
    
    return 0;
}