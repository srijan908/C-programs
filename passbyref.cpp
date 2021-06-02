#include<iostream>

using namespace std;

void swap (int &a, int &b) {
    b = a + b;
    a = b - a;
    b = b - a;
}

int main () {
    int a = 10;
    int b = 13;
    swap(a,b);
    cout<<a<<" "<<b;
}
