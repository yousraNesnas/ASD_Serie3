#include <stdio.h>
int main()
{
    int n, m, k;

    printf("Donner la taille de tableau 1");
    scanf("%d", &n);
    printf("\nDonner la taille de tableau 2");
    scanf("%d", &m);

    int T1[n], T2[m], T3[n + m];

    printf("\nRemplissage du tableau 1");
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("\nDonner la valeur %d ", i);
            scanf("%d", &T1[i]);
        } while (i > 0 && T1[i] <= T1[i - 1]);
    }

    printf("\nRemplissage du tableau 2");
    for (int i = 0; i < m; i++)
    {
        while (i == 0 && T2[i] <= T1[n - 1])
        {
            printf("\nDonner la valeur %d ", i);
            scanf("%d", &T2[i]);
        }

        while (i > 0 && T2[i] <= T2[i - 1])
        {
            printf("\nDonner la valeur %d ", i);
            scanf("%d", &T2[i]);
        }
    }

    printf("Creation du tableau 3");

    int i = 0, j = 0, e = 0;

    for (i = 0; i < n; i++)
    {
        T3[i] = T1[i];
    }

    for (i = 0, j = n; j < m + n; j++, i++)
    {
        T3[j] = T2[i];
    }

    printf("Le tableau après fusion");

    for (e = 0; e < n + m; e++)
    {
        printf("\nT3[%d] = %d", e, T3[e]);
    }
}