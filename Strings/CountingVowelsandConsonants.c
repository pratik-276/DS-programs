//Counting number of vowels and consonants given in a sentence

#include<stdio.h>

int main()
{
    char s[100];
    printf("Enter a sentence=");
    gets(s);
    int i;
    int ccount=0;
    int vcount=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            vcount++;
        else if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
            ccount++;
    }
    printf("Number of vowels=%d     Number of consonants=%d",vcount,ccount);
    return 0;
}