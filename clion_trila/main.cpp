#include <bits/stdc++.h>
using namespace std;

int knapSack(int n, int weights[], int values[]) {

    int cost[n+1] = {0};

    for(int i=1;i<=n;i++){
        for(int j=0;j<4;j++){
            if(weights[j-1]<=i){
                int val = cost[i-weights[j]]+values[j];
                if(cost[i]<val)
                    cost[i] = val;
            }
        }
    }

    for(int x:cost)
        cout<<x<<endl;
    return cost[n];
}

int main() {

    int n;
    cin>>n;

    int weights[] = {2,3,4,6};

    int values[] = {9,14,16,30};

    int cost = knapSack(n,weights,values);
    cout<<cost;
    return 0;
}
