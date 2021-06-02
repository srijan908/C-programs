#include<bits/stdc++.h>
using namespace std;

int checkOdd(int64_t r, int64_t g, int64_t b, int64_t w){
    int64_t arr[] = {r,g,b,w};
    int num = 0;
    for (int64_t x:arr){
        if(x%2!=0)
            num++;
    }
    return num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;

    while(t--){
        int64_t r,g,b,w;
        cin>>r>>g>>b>>w;

        int odd = checkOdd(r,g,b,w);
        if(odd<=1)
            cout<<"YES"<<"\n";
        else if(odd>1){
            /* bool temp = false;
            while(r>0 && g>0 && b>0 && w>0){
                r-=1;
                g-=1;
                b-=1;
                w+=3;
                odd = checkOdd(r,g,b,w);
                if(odd<=1){
                    cout<<"YES"<<"\n";
                    temp = true;
                    break;
                }
            }
            if(temp == false)
                cout<<"NO"<<"\n"; */
            if(r>0 && g>0 && b>0){
                r-=1;g-=1;b-=1;w+=3;
                odd = checkOdd(r,g,b,w);
                if(odd<=1){
                    cout<<"YES"<<"\n";
                }
                else
                    cout<<"NO"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
            
        }
    }

    return 0;
}