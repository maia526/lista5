// Leia uma string s e elimine seus espaços em branco "supérfluos", ou seja, reduza uma sequência de
// dois ou mais espaços em branco para apenas um espaço em branco. Exemplo:
// "Essa cadeia possui vários espaços supérfluos" → "Essa cadeia possui vários espaços supérfluos"
#include <stdio.h>
#include <string.h>

const int MAX_LEN = 100; // qtd mx de caracteres para a string

int main()
{
    char s[MAX_LEN];
    bool copiou_branco;

    printf("Digite uma string: ");
    gets(s);

    int j = 0;
    copiou_branco = false;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ') // se o caracter da vez for um espaço
        {
            if (!copiou_branco)
            {
                s[j++] = s[i];
                copiou_branco = true;
            }
        }
        else // se não for um espaço
        {
            s[j++] = s[i];
            copiou_branco = false;
        }

    // Coloca o caracter NULO
    s[j] = '\0';

    puts("String sem brancos superfluos:");
    printf("(%s)\n", s);
}