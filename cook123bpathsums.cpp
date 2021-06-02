#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int64_t i=0;i<n;i++)
#define endl "\n"
#define pb push_back

typedef int64_t tt;
 
/* tt fun_ceil(tt n,tt k){
    if(n%k==0){
        return n/k;
    }
    else {
        tt x = (n/k)+1;
        return x;
    }
} */
vector<vector<tt>> edges;
vector<tt>answer;
void dfs(int a,int p){
    for(int b:edges[a]){  //we are just taking one edge every time 
        answer[b]=3-answer[a];
        if(b!=p){
            cout<<b<<" ";
            dfs(b,a);
        }
    }
}
void calc(){
    int n;cin>>n;
    edges.clear();
    answer.clear();
    edges.resize(n+1);
    answer.resize(n+1);
    for(int i=0;i<n-1;i++){
        tt u,v;cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    answer[1] = 1;
    dfs(1,-1);
    /* for(int i=1;i<=n;i++){
        cout<<answer[i]<<endl;
    } */
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tt t;cin>>t;

    while(t--){
        calc();
    }
    return 0;
}