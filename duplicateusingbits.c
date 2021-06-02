#include<stdio.h>

void main()
{
    char s[50];
    printf("Enter the string\n");
    scanf("%s",s);

    int i,k,H=0,I=0,x=0;

    for(i=0;s[i]!='\0';i++)
    {
        x=1;
        if(s[i]>=65 && s[i]<=90)
        {
            x = x<<s[i] - 65;
            if(x&H > 0)
                printf("%c is Duplicate",s[i]);
            else
                H = x|H;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            x = x<<s[i] - 97;
            if(x&I > 0)
                printf("%c is Duplicate",s[i]);
            else
                I = x|I;
        }
    }
}
