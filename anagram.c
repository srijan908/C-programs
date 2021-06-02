#include<stdio.h>

void main()
{
    char s1[50];
    printf("Enter the first string\n");
    scanf("%s",s1);

    char s2[50];
    printf("Enter the second string\n");
    scanf("%s",s2);

    int a[26] = {0};

    int i,j,k,l;

    int s=0;

    for(k=0;s1[k]!='\0';k++)
        s++;
    for(l=0;s2[l]!='\0';l++)
        s--;

    if(s==0)
    {
        for(i=0;s1[i]!='\0';i++)
        {
            a[s1[i]-97]+=1;
        }

        for(j=0;s2[j]!='\0';j++)
        {
            a[s2[j]-97]-=1;
            if(a[j]==-1)
            {
                printf("Not anagrams2");
                break;
            }
        }
        printf("Anagrams");
    }
    else
        printf("Not anagrams");
}
