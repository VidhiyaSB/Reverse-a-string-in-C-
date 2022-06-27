//Code by Vidhiya S B
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
   scanf("%s",s);
    int l=strlen(s);
    if(l>10)
     printf("Overflow");
    else if(l<10)
    {
        for(int j=l-1;j>=0;j--)
          printf("%c",s[j]);
    }
    
}
