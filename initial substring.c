#include<stdio.h>
#include<string.h>
void substr(char[],int,int,char[]);
main()
{
    int i,l;
    char ms[100];
    char ss[50];
    printf("enter string:");
    scanf("%[^\n]",ms);
    l=strlen(ms);
    for(i=1;i<=l;i++)
    {
        substr(ms,0,i,ss);
        printf("%s\n",ss);
    }
}
void substr(char ms[100],int pos,int i,char ss[50])
{
    int k;
    for(k=0;k<i;k++)
    {
        ss[k]=ms[k+pos];
    }
    ss[k]='\0';
}
