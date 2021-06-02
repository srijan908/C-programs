#include<stdio.h>

void main()
{
    char a[50];
    printf("Enter the String");
    gets(a);

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
            a[i]+=32;
        else if(a[i]>=97 && a[i]<=122)
            a[i]-=32;
    }
    printf("%s",a);
}
