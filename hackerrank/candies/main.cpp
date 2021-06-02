#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {

    long buy[n], counter=0, sum = 0;

    for (int i=0;i<n;i++)
        buy[i]=1;

    while(counter<n-1)
    {
        int temp = counter, temp2 = 0;

            while(arr[counter]>arr[counter+1])
            {
                counter++;
                temp2++;
                cout<<"First"<<endl;
            }
            for(int i=temp;i<counter;i++)
            {
                buy[i]+=temp2;
                temp2--;
            }

        if(temp==counter){
            while(arr[counter]<arr[counter-1])
            {
                counter++;
                temp2++;
                cout<<"Second"<<endl;
            }
            while(temp2>0)
            {
                buy[temp+temp2]+=temp2;
                temp2--;
            }
        }
    }
//    counter=n-1;
//    while(counter>0)
//    {
//        int temp = counter, temp2 = 0;
//        while(arr[counter]>arr[counter-1])
//            {
//                counter--;
//                temp2++;
//            }
//            for(int i=temp;i>counter;i--)
//            {
//                if(1+temp2>buy[i] && temp-counter>1)
//                    buy[i]=1+temp2;
//                else if(temp-counter==1 && buy[i]==1)
//                    buy[i]+=temp2;
//                temp2--;
//            }
//            counter--;
//    }

    cout<<endl;

    for(int x:buy)
    {
        sum+=x;
        cout<<x<<endl;
    }

    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
