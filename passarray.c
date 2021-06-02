void swap (int a[]) {
    a[3] = a[2] + a[3];
    a[2] = a[3] - a[2];
    a[3] = a[3] - a[2];
}

int main () {
    int a[] = {1,2,3,4,5};

    for (int i = 0; i <=4; i++) {
        printf("%d\n",a[i]);
    }

    swap(a);

    for (int i = 0; i <=4; i++) {
        printf("%d\n",a[i]);
    }
}
