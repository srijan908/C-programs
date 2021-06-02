#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; int x=0; bool two = false;
    cin>>s;

    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1])
            two = true;
        if(s[i]==s[i+1]){
            while(s[i]==s[i+1]){
                i++;
                x++;
            }
        }
    }

    if(x>=7 && two==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
