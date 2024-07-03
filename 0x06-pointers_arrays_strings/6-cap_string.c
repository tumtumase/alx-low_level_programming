#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
int i, j;
int word_separator[] = {
' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
};

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
for (j = 0; j < 13; j++)
{
if (str[i] == word_separator[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
}

return (str);
}

