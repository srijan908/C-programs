#include <bits/stdc++.h>
using namespace std;

string calc(string str){
    string output = "";
    int arr[3] = {0};

    for(int i=0;i<str.length();i++){
        if(str[i]=='W') arr[0]++;
        else if(str[i]=='D') arr[1]++;
        else arr[2]++;
    }

    while(arr[0]>0 or arr[1]>0 or arr[2]>0){
        if(arr[0]>0){
            output += 'W';
            arr[0]--;
        }
        if(arr[1]>0){
            output += 'D';
            arr[1]--;
        }
        if(arr[2]>0){
            output += 'L';
            arr[2]--;
        }
    }

    return output;
}

int main(){
    string str = "DLDD";
    cout<<calc(str);

    return 0;
}