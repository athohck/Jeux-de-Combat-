#include <stdio.h>

struct creation_personnage
{
    char nom[30];
    int pv;
    
}joueur1, joueur2;

void decremente_Pv(struct creation_personnage *p, int moinpv){
    p->pv = p->pv - moinpv;
}

//Declaration du void affiche menu arme 
void arme(){
    printf("\n");
    printf("|-----------------|\n");
    printf("|1: Epee = 10 pv  |\n");
    printf("|2: Couteau = 5 pv|\n");
    printf("|3: Masse = 15 pv |\n");
    printf("|4: Dague = 11 pv |\n");
    printf("|-----------------|\n");

}

int main(){
    //Declaration des PV
    joueur1.pv = 100, joueur2.pv = 100;
    //Info pour le joueur1
    printf("Entre ton nom de joueur : ");
    scanf("%s", joueur1.nom);
    printf("Ton nom de joueur est %s et tu a %d PV\n", joueur1.nom, joueur1.pv);

    //Info pour le joueur2
    printf("Entre ton nom de joueur : ");
    scanf("%s", joueur2.nom);
    printf("Ton nom de joueur est %s et tu a %d PV\n", joueur2.nom, joueur2.pv);

    printf("%s, %s, Voici vos armes :\n", joueur1.nom, joueur2.nom);
    arme();

    int choix_Joueur1, choix_Joueur2;

    
    while (joueur1.pv > 0 && joueur2.pv > 0)
    {
        //CHOIX DU JOUEUR 1
        printf("Choix %s ", joueur1.nom);
        scanf("%d", &choix_Joueur1);

        //TOUR DU JOUEUR 1
        if (choix_Joueur1 == 1)
        {
            printf("%s attaque a la Epee et retire 10 PV a %s\n",joueur1.nom, joueur2.nom);
            decremente_Pv(&joueur2, 10);
            printf("%s a maintenant %d PV\n", joueur2.nom, joueur2.pv);

        }
        else if (choix_Joueur1 == 2)
        {
            printf("%s attaque a la Couteau et retire 5 PV a %s\n", joueur1.nom, joueur2.nom);
            decremente_Pv(&joueur2, 5);
            printf("%s a maintenant %d pv\n", joueur2.nom, joueur2.pv);
        }
        else if (choix_Joueur1 == 3)
        {
            printf("%s attaque a la Masse  et retire 15 PV a %s\n", joueur1.nom, joueur2.nom);
            decremente_Pv(&joueur2, 15);
            printf("%s a maintenant %d PV\n", joueur2.nom, joueur2.pv);

        }
        else if (choix_Joueur1 == 4)
        {
            printf("%s attaque a la dague et retire 11 PV a %s", joueur1.nom, joueur2.nom);
            decremente_Pv(&joueur2, 11);
            printf("%s a maintenant %d PV\n", joueur2.nom, joueur2.pv);
        }
        if (joueur2.pv <= 0)
        {
            printf("%s A GAGNER LA PARTIE ", joueur1.nom);
            break;
        }
        //TOUR DU JOUEUR 2

        //CHOIX DU JOUEUR 2
        printf("Choix %s ", joueur2.nom);
        scanf("%d", &choix_Joueur2);

        if (choix_Joueur2 == 1)
        {
            printf("%s attaque a la Epee et retire 10 PV a %s\n",joueur2.nom, joueur1.nom);
            decremente_Pv(&joueur1, 10);
            printf("%s a maintenant %d PV\n", joueur1.nom, joueur1.pv);

        }
        else if (choix_Joueur2 == 2)
        {
            printf("%s attaque a la Couteau et retire 5 PV a %s\n", joueur2.nom, joueur1.nom);
            decremente_Pv(&joueur1, 5);
            printf("%s a maintenant %d pv\n", joueur1.nom, joueur1.pv);
        }
        else if (choix_Joueur2 == 3)
        {
            printf("%s attaque a la Masse  et retire 15 PV a %s\n", joueur2.nom, joueur1.nom);
            decremente_Pv(&joueur1, 15);
            printf("%s a maintenant %d PV\n", joueur1.nom, joueur1.pv);

        }
        else if (choix_Joueur2 == 4)
        {
            printf("%s attaque a la dague et retire 11 PV a %s", joueur2.nom, joueur1.nom);
            decremente_Pv(&joueur1, 11);
            printf("%s a maintenant %d PV\n", joueur1.nom, joueur1.pv);
        }
        if (joueur1.pv <= 0)
        {
            printf("%s A GAGNER LA PARTIE ", joueur2.nom);
        }

    }
    
    
    
    
    





    return 0;
}