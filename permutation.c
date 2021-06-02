#include<stdio.h>

void perm(char a[10],int l,int h)
{
    int i;
    char temp;


    if(l==h)
        printf("%s\n",a);
    else
    {
        for(i=l;i<=h;i++)
        {
            temp = a[l];
            a[l] = a[i];
            a[i] = temp;
            perm(a,l+1,h);
            temp = a[l];
            a[l] = a[i];
            a[i] = temp;
        }
    }
}

void main()
{
    char a[10];
    printf("Enter the string\n");
    scanf("%s",a);
    int l=0,h;
    for(h=0;a[h]!='\0';h++)
        continue;
    perm(a,l,h);
}
