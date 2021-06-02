#include<stdio.h>

void perm(char s[50],int k)
{
    static int a[50] = {};
    static char res[50];
    int i;
    if(s[k]=='\0')
    {
        res[k] = '\0';
        printf("%s\n",res);
    }
    else
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(a[i]==1)
                continue;
            a[i] += 1;
            res[k] = s[i];
            perm(s,k+1);
            a[i] = 0;
        }
    }
}

void main()
{
    char s[50];
    int k = 0;
    printf("Enter the string\n");
    scanf("%s",s);
    perm(s,k);
}
