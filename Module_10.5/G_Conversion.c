#include <stdio.h>

int main()

{
    char S[100001];
    scanf("%s",&S);

    for (int i = 0; S[i] != '\0'; i++) 
    {  
        if (S[i] == ',')
        {
            S[i] = ' ';
        }
        else if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z'))
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                S[i] = S[i] + 32;
            }
            else
            {
                S[i] = S[i] - 32;
            }
        }
    }

    printf("%s\n",S);

    return 0;
}
