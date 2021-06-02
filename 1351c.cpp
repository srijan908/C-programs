#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int32_t i=0;i<n;i++)
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        string s;cin>>s;
        stack<char> k;
        stack<char>pop_ind;
        tt i, sum = 0;
        for(i=0;s[i]!='\0';i++){
            char temp;
            if((k.empty()!=true) and ((s[i]=='N' and k.top()=='S') or (s[i]=='W' and k.top()=='E') or (s[i]=='E' and k.top()=='W') or (s[i]=='S' and k.top()=='N'))){
                temp = k.top();
                k.pop();
                sum+=1;
                pop_ind.push(temp);
            }
            else{
                if(pop_ind.size()>0 and pop_ind.top()==s[i]){
                    sum+=1;
                    pop_ind.pop();
                    continue;
                }
                k.push(s[i]);
                sum+=5;
            }
            cout<<sum<<" ";
        }
        //cout<<sum<<pop_ind.size()<<endl;
    }
    return 0;
}