#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   static bool cmp(vector <int>& a, vector <int>& b){
      return a[1] < b[1];
   }
   int eraseOverlapIntervals(vector<vector<int>>& arr) {
      int n = arr.size();
      if(!n)return 0;
      int cnt = 1;
      sort(arr.begin(), arr.end(), cmp);
      int end = arr[0][1];
      for(int i = 1; i < n; i++){
         if(arr[i][0] >= end){
            end = arr[i][1];
            cnt++;
         }
      }
      return n - cnt;
   }
};
main(){
    int n;cin>>n;
    vector<vector<int>> v(n);
    int col = 2;
    for(int i=0;i<n;i++){
        v[i] = vector<int>(col);
        for (int j = 0; j < col; j++) 
            cin>>v[i][j]; 
    }
    Solution ob;
    cout << (ob.eraseOverlapIntervals(v));
}