#include <stdio.h>
int main()
{
char str[100] = "zeal";
int length = 0;
while (str[length] != '\0')
{
    length++;
}

printf("Original string is %s\n", str);
printf("Reversed string is ");
for (int i = length - 1; i >= 0; i--)
{
printf("%c", str[i]);
}
return 0;
}
