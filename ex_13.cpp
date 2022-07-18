// Leia duas strings s1 e s2 gere a string s3 como resultado da concatenação de s1 com s2. Imprima
// s3. Não use a função strcat.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;

int main()
{
    char s1[MAX_LEN], s2[MAX_LEN], s3[MAX_LEN];
    printf("Digite uma string: ");
    gets(s1);

    printf("Digite outra string: ");
    gets(s2);

    int x = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        s3[x++] = s1[i];
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        s3[x++] = s2[i];
    }

    s3[x] = '\0';
    puts(s3);
}