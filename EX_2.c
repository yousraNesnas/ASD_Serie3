/**Soit une liste de N nombres entiers
contenus dans un tableau. Ecrire l'algorithme qui
détermine le plus petit parmi ces nombres
*/

#include <stdio.h>
int main()
{

    int n, T[100], min;

    printf("Donnez la taille du tableau \t");
    scanf("%d", &n);

    // remplissage du tableau2
    for (int i = 0; i < n; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    // on met la 1ere valeur du tableau dans la variable min
    min = T[0];

    for (int i = 1; i < n; i++)
    {
        if (T[i] < min)
        {
            min = T[i];
        }
    }

    printf(" \nLe min est %d.", min);
}