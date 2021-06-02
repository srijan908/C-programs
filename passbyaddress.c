void swap (int *a, int *b) {
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a;
}

int main () {
    int a = 10;
    int b = 14;
    swap(&a, &b);
    printf("%d %d",a,b);
}
