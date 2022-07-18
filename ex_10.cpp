// Leia uma string s e um caracter c. Em seguida, remova todas as ocorrências do caracter c da string s
// e imprima s. Exemplo:
// s: Programacao
// c: a
// Progrmco
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;

int main()
{
    char s[MAX_LEN], c;
    printf("Digite uma string: ");
    gets(s);
    printf("\nDigite uma letra: ");
    scanf(" %c", &c);

    bool achou = false;
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            s[j] = s[i + 1];
            j++;
            i++;
        }
        else
        {
            s[j] = s[i];
            j++;
        }
    }

    // Coloca o caracter NULO
    s[j] = '\0';

    printf("%s", s);
}