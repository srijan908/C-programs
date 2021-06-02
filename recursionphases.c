void fun2 (int x)
{
    if (x>0)
    {
        printf("%d\n",x);
        fun2(x-1);
    }
}

void main ()
{
    fun2(3);
}
