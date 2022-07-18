// Leia uma string s e converta as letras maiúsculas em minúsculas. Dica: some 32 aos caracteres cujo
// código ASCII está entre 65 e 90 ('A'..'Z').
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int main()
{
    char s[MAX_LEN];

    printf("Digite uma string: ");
    gets(s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }

    puts("Convertida para minuscula: ");
    printf("%s", s);
}