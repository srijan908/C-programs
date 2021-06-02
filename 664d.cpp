#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int64_t i=0;i<n;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    int i;vector<int64_t> s(t);
    fo( i,t){   
        cin>>s[i];
    }

    unordered_set<int64_t> sumSet;
    sumSet.insert(0);int64_t sum = 0;
    int moves=0;
    fo(i,t){
        sum+=s[i];
        if(sum==0 || sumSet.find(sum)!=sumSet.end()){
            moves++;
            sumSet.clear();
            sumSet.insert(0);
            sum = s[i];
        }
        sumSet.insert(sum);
    }
    
    cout<<moves;
    return 0;
}