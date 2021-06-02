#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
        long long n,T;
        cin>>n>>T;
        vector<long long> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        vector<long long>c;
        vector<long long>d;
        vector<long long>y;
        
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        /*
        if(s[0]+s[1]==T){
            d.push_back(s[1]);
            cout<<0<<" "<<1<<" ";
        }
        else{
            c.push_back(s[0]);
            cout<<0<<" "<<0<<" ";
        }

        for(int i=2;i<n;i++){
            int temp = s[i], temp2 = 0,temp3= 0;
            for(int k = 0;k<c.size();k++){
                if(c[k]+temp==T)
                    temp2++;
            }
            for(int k = 0;k<d.size();k++){
                if(d[k]+temp==T)
                    temp3++;
            }
            //cout<<temp2<<" "<<temp3<<"";
            if(temp2<temp3){
                cout<<0<<" ";
                c.push_back(s[i]);
            }
            else {
                cout<<1<<" ";
                d.push_back(s[i]);
            }
        }
        cout<<"\n"; */
        int n1=0,n2=1;
        for(int i=0;i<n;i++){
            if(2*s[i]<T){
                cout<<0<<" ";
            }
            else if(2*s[i]>T){
                cout<<1<<" ";
            }
            else{
                if(n1==0){
                    cout<<0<<" ";
                    n1=1;
                    n2=0;
                }
                else if(n1==1 && n2==0){
                    cout<<1<<" ";
                    n1=0;
                    n2=1;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}