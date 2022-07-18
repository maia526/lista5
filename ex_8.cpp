// Leia uma string s e inteiros i e j e imprima o segmento de s de i até j. Não imprima nada se i ou j
// forem inválidos.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int main()
{
    char s[MAX_LEN];
    int i, j;
    printf("Digite uma string: ");
    gets(s);
    printf("\nPrimeira posicao: ");
    scanf(" %d", &i);
    printf("\nSegunda posicao: ");
    scanf(" %d", &j);

    puts("\n");

    for (int n = i; n <= j; n++)
    {
        printf("%c", s[n]);
    }
}
