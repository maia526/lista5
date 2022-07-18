// Leia uma string s e imprima suas vogais e, em seguida, suas consoantes.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[20];
    gets(s);

    int x = 0;
    while (s[x] != '\0')
        x++;

    puts("Vogais: ");
    for (int i = 0; i < x; i++)
    {
        char c = tolower(s[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("%c\n", s[i]);
    }

    puts("\nConsoantes: ");
    for (int i = 0; i < x; i++)
    {
        char c = tolower(s[i]);

        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            printf("%c\n", s[i]);
    }
}