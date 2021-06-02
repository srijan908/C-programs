#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> grid;
    grid.push_back("Blue");
    grid.push_back("Redb");
    grid.push_back("Oran");
    grid.push_back("Yell");


    for (int i=0;i<4;i++)
    {
        string temp = grid[i];
        sort(temp.begin(),temp.end());
        grid[i] = temp;
    }
    int n = 0;
    for (int i =0;i<3;i++)
    {
        string temp1 = grid[i];
        string temp2 = grid[i+1];
        for(int j=0;j<4;j++)
        {
            if(temp1[j]<temp2[j])
                n++;
        }
    }
}
