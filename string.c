#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *str)
{
    int len = strlen(str);
        // Reversing the string
        for (int i = 0; i < len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[len - i - 1];
            str[len - i - 1] = temp;
        }
    }

int main()
{
    char *string = (char*)malloc(100 * sizeof(char));
    if (string == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Reading the string using fgets, and removing any newline character
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = 0;  // Removing the newline character

    fun(string);
    printf("%s\n", string);

    free(string);  // Don't forget to free the allocated memory
    return 0;
}

