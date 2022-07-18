// Leia uma string s e um caracter c e imprima a posição de c em s; ou -1, caso c não pertença a s.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int retorna_posicao(char s[], int tam, char c)
{
    for (int i = 0; i < tam; i++)
    {
        if (s[i] == c)
            return i;
    }
    return -1;
}

int main()
{
    char s[MAX_LEN], c;
    printf("Digite uma string: ");
    gets(s);
    printf("\nDigite uma letra: ");
    scanf(" %c", &c);

    int pos, tam = strlen(s);
    pos = retorna_posicao(s, tam, c);

    if (pos == -1)
        printf("\nO caracter %c nao se encontra na string.", c);
    else
        printf("\nO caracter %c esta na posicao %d.", c, pos);
}