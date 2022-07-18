// Leia uma string s e um caracter c e imprima o número de ocorrências de c em s.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int retorna_ocorrencias(char s[], int tam, char c)
{
    int cont = 0;
    for (int i = 0; i < tam; i++)
    {
        if (s[i] == c)
            cont += 1;
    }
    return cont;
}

int main()
{
    char s[MAX_LEN], c;
    printf("Digite uma string: ");
    gets(s);
    printf("\nDigite uma letra: ");
    scanf(" %c", &c);

    int qtd, tam = strlen(s);
    qtd = retorna_ocorrencias(s, tam, c);

    printf("\nO caracter %c aparece %d vezes.", c, qtd);
}