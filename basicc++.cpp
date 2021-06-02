#include<iostream>

using namespace std;

class Rectangle {

private:

    int length;
    int breadth;

public:

        Rectangle (int l, int b) {
            length = l;
            breadth = b;
    }

    int area () {
        return length*breadth;
    }
};

main () {
    Rectangle r(5,10);
    int a = r.area();

    cout<<a;
}
