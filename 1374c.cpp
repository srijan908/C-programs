#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        int32_t n;cin>>n;
        string s;cin>>s;

        stack<char> k;

        int moves = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                k.push('(');
            }
            else if(s[i]==')' && k.empty()){
                moves+=1;
            }
            else if(s[i]==')')
                k.pop();
        }
        cout<<moves<<"\n";
    }
    return 0;
}