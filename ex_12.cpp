// Leia duas strings s1 e s2 gere a string s3 como resultado da intercalação de s1 com s2. Imprima s3.
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;

int main()
{
    char s1[MAX_LEN], s2[MAX_LEN], s3[MAX_LEN];
    int x, i;
    printf("Digite uma string: ");
    gets(s1);

    printf("Digite outra string: ");
    gets(s2);

    x = 0;
    for (int i = 0; i < strlen(s1) && i < strlen(s2); i++)
    {
        s3[x++] = s1[i];
        s3[x++] = s2[i]; 
    }

    while (i < strlen(s1))
    {
        s3[x++] = s1[i++];
    }

    while (i < strlen(s2))
    {
        s3[x++] = s2[i++];
    }

    s3[x] = '\0';
    puts(s3);
}