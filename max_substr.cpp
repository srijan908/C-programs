#include<iostream>
#include<string.h>

using namespace std;

string findSubstring(string s, int k) {
    int len;
    k--;
    for(len=0;s[len]!=0;len++){}
    string substr_s[len-k];

    int nd = k;
    cout<<nd<<"\n";

    for(int i=0;i<len-k;i++)
    {
        substr_s[i] = s.substr(i,nd);
        nd++;
    }

    for(int i=0;i<len-k;i++)
        cout<<substr_s[i]<<"\n";

    int vowels[len-k] = {0};
    for(int i=0;i<len-k;i++)
    {
        string temp = substr_s[i];
        if(temp[i]=='a' || temp[i]=='e' || temp[i]=='i' ||
           temp[i]=='o' || temp[i]=='u')
           vowels[i]++;
    }

    int max = vowels[0];

    for(int i=1;i<len-k;i++)
    {
        if(vowels[i]>max)
            max = vowels[i];
    }
    return substr_s[max];
}

int main()
{
    string x =findSubstring("azerdii",5);
    cout<<x;
}
