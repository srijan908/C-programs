//void fun2 (int x)
//{
//    if (x>0)
//    {
//        fun2(x-1);
//        printf("%d\n",x);
//    }
//}
//
//void main ()
//{
//    fun2(3);
//}

void fun(int n)
{
    int x = n;
    while(n>0)
    {
        printf("%d",(x-(n-1)));
        n--;
    }
}

void main()
{
    fun(5);
}
