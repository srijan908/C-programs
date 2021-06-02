#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

    int len = s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==" a")
            len--;
    }

    int small[26] = {0};
    int capital[26]= {0};

    if(len<26)
         return "not pangram";
    else
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]==" ")
                continue;
            if(s[i]>=97 && s[i]<=122)
            {
                small[s[i]-97]++;
                if( small[s[i]-97]++>1)
                    return "not pangram";
            }
            if(s[i]>=65 && s[i]<=90)
            {
                small[s[i]-65]++;
                if( small[s[i]-65]++>1)
                    return "not pangram";
            }
        }
        return "pangram";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

