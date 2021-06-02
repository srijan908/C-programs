#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];bool a=false;
    cin>>s;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='H'){
            cout<<"YES";
            a = true;
            break;
        }
        else if(s[i]=='Q'){
            cout<<"YES";
            a = true;
            break;
        }
        else if(s[i]=='9'){
            cout<<"YES";
            a = true;
            break;
        }
//        else if(s[i]=='+'){
//            cout<<"YES";
//            a = true;
//            break;
//        }
    }
    if(a!=true)
        cout<<"NO";
}
