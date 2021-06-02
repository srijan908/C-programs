#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ex(n);
    for(int i=0;i<n;i++)
        cin>>ex[i];


    for(int i=0;i<n;i++){
        if(ex[i]%7==0 || ex[i]%3==0){
            cout<<"YES"<<endl;
        }
        else 
        {
            int temp1 = ex[i];
            bool a = false;
            while(temp1>0){
                if(temp1%3==0){
                    cout<<"YES"<<endl;
                    a = true;
                    break;
                }
                temp1-=7;
            }
            if(a==false)
                cout<<"NO"<<endl;
        }
    }
}
