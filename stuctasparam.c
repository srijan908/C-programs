struct rectangle {
    int length;
    int breadth;
};
//
//int area(struct rectangle r) {
//    int a = r.length*r.breadth;
//    return a;
//}
//
//void main() {
//    struct rectangle r = {10,5};
//    printf("%d",area(r));
//}

int area (struct rectangle *r) {
    r->breadth = 6;
    return (r->breadth)*(r->length);
}

void main () {
    struct rectangle r = {10,5};
    printf("%d",area(&r));
}
