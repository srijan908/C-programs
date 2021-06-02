void main () {
    int *p;
    p = (int *)malloc(sizeof(int));
    int a = 10;
    p = &a;
    printf("%d",&p);
}
