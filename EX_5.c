/*On se propose de vérifier si une
valeur VAL donnée est un élément d'un tableau T
de nombres entiers.
a) Écrire un algorithme de recherche séquentielle
de VAL dans T (Afficher l’index de VAL dans T).
b) Supposons que le tableau initial T soit trié par
ordre croissant. Utiliserez une approche
dichotomique pour la recherche de VAL dans T.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, val;

    printf("Taille du tableau ");
    scanf("%d", &n);
    int t[n];

    for (i = 0; i < n; i++)
    {
        printf("t[%d]= ", i);
        scanf("%d", &t[i]);
    }

    printf("Donnez la valeur a chercher");
    scanf("%d", &val);

    for (i = 0; i < n; i++)
    {
        if (t[i] == val)
        {
            printf("la valeur %d existe dans le tableau et son index est %d.", val, i);
            return 0;
        }

        if (i == n - 1)
        {
            printf("la valeur %d n'existe pas dans le tableau.", val);
            return 0;
        }
    }
}