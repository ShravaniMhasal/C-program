#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100]="Madam";
    int left =0;
    int right = strlen(str)-1;
    while(left<right)
    {
        if (str[left]==' ')
        {
            left++;
            continue;
        }
        if (str[right]!=' ')
        {
            right--;
            continue;
        }
        if(tolower(str[left])!=tolower(str[right]))
        {
            printf("Not a palindrome");
        }
        left++;
        right--;
    }
    return 0;
}
