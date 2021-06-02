#include<bits/stdc++.h> 
using namespace std; 
 
vector<int> longestSubseqWithDiffOne(vector<int> numbers, int diff) 
{ 
    vector<pair<int,pair<int,int>>> s;
	for(int i=0;i<numbers.size()-1;i++){
        int last = i;
        while(abs(numbers[i]-numbers[i+1])<=diff and i<numbers.size()-1){
            i++;
        }
        s.push_back({i-last,{last,i}});
    }
    sort(s.begin(),s.end());
    int m = 0;
    vector<int> ans(2,0);
    for(int i=0;i<s.size();i++){
        if(s[i].first>m){
            m = s[i].first;
            ans[0] = s[i].second.first;
            ans[1] = s[i].second.second;
        }
    }
    return ans;
} 

// Driver code 
int main() 
{ 
	// Longest subsequence with one difference is 
	// {1, 2, 3, 4, 3, 2} 
	vector<int> arr = {-1,4,6,2,8,4,7,12}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
    int diff = 5;
	vector<int> ans = longestSubseqWithDiffOne(arr,5);
    cout<<ans[0]<<" "<<ans[1];
	return 0; 
} 
