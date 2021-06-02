#include<stdio.h>

void main()
{
    char s[50];
    printf("Enter the string\n");
    gets(s);

    int small[26] = {0};
    int capital[26]= {0};

    int i,j,k;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122)
            small[s[i]-97]+=1;
        else if(s[i]>=65 && s[i]<=90)
            capital[s[i]-65]+=1;
    }

    printf("Duplicate letters present in the string are:\n");

    for(j=0;j<26;j++)
    {
        if(capital[j]>1)
        {
            printf("Letter : %c Times occurred : %d\n",j+65,capital[j]);
        }
    }

    for(k=0;k<26;k++)
    {
        if(small[k]>1)
        {
            printf("Letter : %c Times occurred : %d\n",k+97,small[k]);
        }
    }
}
