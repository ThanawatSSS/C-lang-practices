#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("%s is not a palindrome.\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome.\n", str);
    return 0;
}