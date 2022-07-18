// Leia duas strings s1 e s2 e uma posição p (p  0). Em seguida, insira a string s2 na string s1 na
// posição p e imprima s1. Caso a posição p seja inválida, apresente uma mensagem de erro.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;

int main()
{
    char s1[MAX_LEN], s2[MAX_LEN];
    int p;
    printf("Digite uma string: ");
    gets(s1);

    printf("Digite outra string: ");
    gets(s2);

    printf("Digite a posicao p: ");
    scanf("%d", &p);

    int x = 0;
    if (p > 0 && p <= strlen(s1))
    {
        for (int i = p; i < strlen(s1)  &&  x < strlen(s2); i++)
        {
            s1[i] = s2[x++];
        }
    }
    puts(s1);
}