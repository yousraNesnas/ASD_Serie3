/**Réaliser un algorithme en suivant
les étapes suivantes :
a. Ecrire un algorithme qui lit un tableau de 9
notes puis calcule et affiche leur moyenne.
*/

#include <stdio.h>
int main()
{

    float tab1[9], somme = 0, moy; // declaration d'un tableau de 9 notes

    // remplissage du tableau
    for (int i = 0; i < 9; i++)
    {
        printf("tab1[%d] = ", i);
        scanf("%f", &tab1[i]);
        // calculer la sommes des notes:
        somme = somme + tab1[i];
    }

    // calculer la moyenne:
    moy = somme / 9;

    printf("\nLa moyenne des 9 notes est: %f", moy);

    /*
    b. Modifier l’algorithme afin de saisir un tableau
    tabCoef contenant les coefficient respectifs des 9
    modules. Ensuite donner la nouvelle moyenne en
    tenant compte de ces coefficients.*/

    int tab2[9], somme_coef;
    float moy2;

    // remplissage du tableau2
    for (int i = 0; i < 9; i++)
    {
        printf("tab2[%d] = ", i);
        scanf("%d", &tab2[i]);
        // calculer la sommes des notes:
        somme_coef = somme_coef + tab1[i];
    }

    // calcule de la nouvelle somme
    somme = 0;
    for (int i = 0; i < 9; i++)
    {
        somme = somme + tab1[i] * tab2[i];
    }

    moy2 = somme / somme_coef;

    printf("La nouvelle moyenne est %f", moy2);

    return 0;
}