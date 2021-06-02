#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //Format: vector<nameofdatatype> nameofvector

    vector<int> myVector;

    myVector.push_back(15);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(9);
    myVector.push_back(51);

    cout<<"Vector : ";

    for(unsigned int i = 0;i<myVector.size();i++)
    {
        cout<<myVector[i]<<" ";
    }

    cout<<"\n";

    myVector.insert(myVector.begin()+2,6);

    cout<<"Vector : ";

    for(unsigned int i = 0;i<myVector.size();i++)
    {
        cout<<myVector[i]<<" ";
    }

    cout


    return 0;
}
