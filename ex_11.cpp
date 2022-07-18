// Leia duas strings s1 e s2 e calcule a posição da string s2 na string s1. Se não existir imprima -1.
// Ignore a diferença de maiúsculas e minúsculas. Exemplo:
// s1 = "Sistemas de Informacao"
// s2 = "info"
// posição = 12
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int main()
{
    char s1[MAX_LEN], s2[MAX_LEN];
    printf("Digite a string 1: ");
    gets(s1);
    printf("Digite a string 2: ");
    gets(s2);

    bool achou = false;
    int p, k;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[0])
        {
            achou = true;
            p = i;
            k = i + 1;

            for (int j = 1; j < strlen(s2) && k < strlen(s2); j++)
            {
                if (s1[k] != s2[j])
                {
                    achou = false;
                    break;
                }
                k++;
            }

            if (achou)
                break;
        }
    }

    if (achou)
        printf("Posicao: %d", p);
    else
        puts("\n-1");
}