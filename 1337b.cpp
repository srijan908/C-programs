#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    queue<string> ans;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;

        while(n>0 || m>0){
            if(x<=0)
                break;
            if(x<=10 || n==0){
                x-=10;
                n--;
            }
            else{
                x=floor(x/2)+10;
                m--;
            }
        }
        if(n<=0)
            ans.push("YES");
        else{
            ans.push("No");
        }
    }

    while(!ans.empty()){
        cout<<ans.front()<<endl;
        ans.pop();
    }
}