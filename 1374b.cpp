#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long> cases(t);
    for(int i=0;i<t;i++)
        cin>>cases[i];

    for(int i=0;i<t;i++){
        long temp=cases[i];
        int step = 0;
        while(temp>1){
            if(temp%6==0)
                temp = temp/6;
            else
                temp*=2;
            step++;
            //cout<<temp<<" ";
        }
        if(temp==1)
            cout<<step<<endl;
        else
        {
            cout<<-1<<endl;
        }
    }
}