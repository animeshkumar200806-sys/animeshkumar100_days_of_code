// Convert a line to title case: capitalize the first letter of each word.
#include <stdio.h>

int main(void)
{
    char text[2000];
    int i, capitalize_next = 1;

    printf("Enter a sentence: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (capitalize_next)
            {
                if (ch >= 'a' && ch <= 'z') text[i] = (char)(ch - 'a' + 'A');
                capitalize_next = 0;
            }
            else if (ch >= 'A' && ch <= 'Z') text[i] = (char)(ch - 'A' + 'a');
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r')
        {
            capitalize_next = 1;
        }
    }
    printf("Title case: %s", text);
    return 0;
}
