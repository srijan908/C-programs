#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    // for(int i =0;s[i]!='\0';){
    //     if(s[i]!=s[i+1] && s[i+1]!='\0'){
    //         s.erase(i,2);
    //         if(i==0)
    //             i = 0;
    //         else
    //         {
    //             i=i-1;
    //         }
            
    //         n-=2;
    //     }
    //     else
    //     {
    //         i++;
    //     }
        
    // }
    // cout<<n;

    map<char, int> ex ;
    ex.insert(pair<char,int>('0',0));
    ex.insert(pair<char,int>('1',0));

    for(int i=0;s[i]!='\0';i++){
        char temp = s[i];
        ex[temp]++;
    }
    
    // for (auto it = ex.begin(); it != ex.end(); ++it) { 
    //     cout << '\t' << it->first 
    //          << '\t' << it->second << '\n'; 
    // } 

    int a=ex['0'], b=ex['1'];

    while(!)
}