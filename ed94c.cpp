#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

string calc(string s, int x){
    int n = s.size();
    string ans2 = s;
    for(int i=0;i<n;i++){
        if(i+x<n && s[i+x]=='1' || i-x>=0 && s[i-x]=='1')
            ans2[i] = '1';
        else 
            ans2[i] = '0';
    }
    return ans2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        string s;cin>>s;
        int x;cin>>x;
        string ans = "";
        for(int i=0;i<s.length();i++)
            ans+='1';
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(i+x<s.length())
                    ans[i+x] = '0';
                if(i-x>=0)
                    ans[i-x] = '0'; 
            }
        }
        if(calc(ans,x)==s)
            cout<<ans<<"\n";
        else
            cout<<"-1"<<"\n";
    }
    return 0;
}