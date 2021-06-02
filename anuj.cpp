#include <bits/stdc++.h>

using namespace std;
int printPascal(int arr[],int arrlength)
{
int n = arr[1]+1;vector<int> ans;
for (int line = 1; line <= n; line++)
{
    int C = 1; // used to represent C(line, i)
    for (int i = 1; i <= line; i++)
    {

        // The first value in a line is always 1
        cout<< C<<" ";
        if(line==n)
            ans.push_back(C);
        C = C * (line - i) / i;
    }
    cout<<"\n";
        }
if(arrlength==ans.size())
    return -1;
else
    return ans[arrlength];
}

// Driver code
int main()
{
    int arr[] = {1,6};
    int x=printPascal(arr,2);
    cout<<(x);
    return 0;
}
