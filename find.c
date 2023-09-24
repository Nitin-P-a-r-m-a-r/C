#include <stdio.h>
#include <string.h>

int main()
{
    char ch[50];
    int j, count = 0;
    char chars;
    printf("Enter your string : ");
    gets(ch);
    printf("Enter your character which you want to find : ");
    scanf("%c", &chars);
    
    if(chars == NULL)
        return 1;

    for (j = 0; j < strlen(ch); j++)
    {
         if(chars == ch[j])
            count++;
    }
    if(count == 0)
        printf("your charecter is not found");
    else
        printf("%d", count);
    return 0;
}