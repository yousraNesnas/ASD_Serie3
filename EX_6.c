/*Soit VECT un tableau d'entiers.
Ecrire un algorithme qui insère, dans ce tableau
une valeur VAL à la kième position*/

#include <stdio.h>

int main()
{
    int k, n, val;
    int T[100];

    printf(" Entrez la taille du tableau : ");
    scanf("%d", &n);

    printf(" \nEntrez les %d éléments : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &T[i]);

    printf(" Entrez l'emplacement où vous souhaitez insérer un élément:\n ");
    scanf("%d", &k);

    printf(" Entrez la valeur à insérer:\n ");
    scanf("%d", &val);

    for (int i = n - 1; i >= k - 1; i--)
        T[i + 1] = T[i];

    T[k - 1] = val;

    printf(" Aprés l'insertion le tableau = ");

    for (int i = 0; i <= n; i++)
        printf("%3d", T[i]);

    return 0;
}