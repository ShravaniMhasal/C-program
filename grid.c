#include<stdio.h>
#include<string.h>
int main()
{
    char grid[3][6] = {"HELLO","WORLD","APPLE" };
    char word [10];
    int row, i, j, found=0;
    printf("Enter row number (0 to 2):");
    scanf("%d", & row);
    printf("Enter word:");
    scanf("%s", word);
    for(int i=0; i < strlen(grid[row]);i++)
    {
        if(word[i]!=grid[row][i])
        
            printf("Not present..");
        
        else
            printf("word found in row");
        
        return 0;
    }
}
