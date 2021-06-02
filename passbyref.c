void swap (int &a, int &b) {
    b = a + b;
    a = b - a;
    b = b - a;
}

void main () {
    int a = 10;
    int b = 13;
    swap(a,b);
    printf("%d %d",a,b);
}
