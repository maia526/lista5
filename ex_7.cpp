// Leia uma string s e dois caracteres c1 e c2. Em seguida, substitua todas as ocorrências de c1 por c2
// na string s e imprima a string resultante.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int main()
{
    char s[MAX_LEN], c1, c2;
    printf("Digite uma string: ");
    gets(s);
    printf("\nDigite uma letra: ");
    scanf(" %c", &c1);
    printf("\nDigite outra letra: ");
    scanf(" %c", &c2);

    int tam = strlen(s);
    for (int i = 0; i < tam; i++)
    {
        if (s[i] == c1)
            s[i] = c2;
    }

    printf("%s", s);
}