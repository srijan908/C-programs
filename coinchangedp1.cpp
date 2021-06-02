#include<bits/stdc++.h>
using namespace std;

void no_sol(){
    cout<<"Enter the coin denominations available\n";
    int n;cin>>n;
    vector<int> den;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        den.push_back(temp);
    }

    cout<<"Enter the money you want to change\n";
    int mon;cin>>mon;

    int count[mon+1] = {0};
    count[0] = 1;

    for(int i=1;i<=mon;i++){
        for(auto c:den){
            if(i-c>=0)
                count[i] += count[i-c];
        }
    }

    cout<<count[mon];
}

void calc(){
    cout<<"Enter the coin denominations available\n";
    int n;cin>>n;
    vector<int> den;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        den.push_back(temp);
    }

    cout<<"Enter the money you want to change\n";
    int mon;cin>>mon;

    int change[mon+1];

    int first[n+1];

    change[0] = 0;

    for(int i=1;i<=mon;i++){
        change[i] = 1e9;
        for(auto it:den){
            if(i-it>=0 and change[i-it]+1<change[i]){
                change[i] = change[i-it]+1;
                first[i] = it;
            }
        }
    }

    while(mon>0){
        cout<<first[mon]<<" ";
        mon -= first[mon];
    }

    //cout<<change[mon];
}

int main(){

    //calc();
    no_sol();

    return 0;
}