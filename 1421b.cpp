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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tt t;cin>>t;

    while(t--){
        tt n;cin>>n;
        string s[n];
        tt i,j;
        fo(i,n){
            fo(j,n)
                cin>>s[i][j];
        }
        vector<bool>l(n);
        fo(i,n)
            l[i]=false;
        fo(i,n){
            set<char>temp;
            fo(j,n)
                temp.insert(s[i][j]);
            if()
        }

        char a,b,c,d;
        a=s[0][1];b=s[1][0];d=s[n-1][n-2];c=s[n-2][n-1];
        if((a==b) and (c==d) and (a!=c)){
            cout<<0<<endl;
            continue;
        }
        if((a==b) and (c==d) and (a==c)){
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl<<n<<" "<<n-1<<endl;
            continue;
        }
        if(((a==b) and (c!=d)) or ((c==d) and (a!=d))){
            if(a!=b and a==c){
                cout<<1<<endl;
                cout<<"1 2"<<endl;
            }
            else if(a!=b and b==c){
                cout<<1<<endl;
                cout<<"2 1"<<endl;
            }
            else if(c!=d and c==a){
                cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else{
                cout<<1;
                cout<<n<<" "<<n-1<<endl;
            }
            continue;
        }
        if(a!=b and c!=d){
            cout<<2<<endl;
            if(a==c){
                cout<<"1 2"<<endl<<n<<" "<<n-1<<endl;
            }
            else{
                cout<<"2 1"<<endl<<n-1<<" "<<n<<endl;
            }
            continue;
        }
    }
    return 0;
}