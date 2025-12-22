#include<stdio.h>
int main()
{
    char str[]="shravani";
    int i;
    int vowels=0, consonants=0, digits=0, spaces=0;
    for(i=0; str[i]!='\0';i++)
    {
    
        if (str[i]==' ')
    {
        spaces++;
    }
    else if((str[i]>='0'&&str[i]<='9'))
    {
        digits++;
    }
    else if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
    
{
    vowels++;
}
else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
{
    consonants++;
}
    }
printf("vowels: %d\n", vowels);
printf("consonants:%d\n", consonants);
printf("digits:%d\n", digits);
printf("spaces:%d\n", spaces);

return 0;
}
