#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
 
    int arr[t][3];
    for(int i=0;i<t;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for(int j=0;j<t;j++){
        int n=arr[j][0];
        int a=arr[j][1];
        int b=arr[j][2];
        string s = "";
        for(int i=0;i<n;i++){
            if(i<a){
                s += alpha[i%b];
            }
            else{
                s += s[i-a];
            }
        }
        cout<<s<<endl;
    }
}