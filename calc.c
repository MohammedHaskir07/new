#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int year ;
    int month ;
    int day ;
}date;
typedef struct {
    char matricule[10];
    char nom[20];
    char prenom[20];
    char cin[10];
    char Ncss[20];
    char address[100];
    char ville [30];
    char quartier[30];
    char nationalite[20];
    char telephone[20];
    char email[50];
    date date_naissance;
    char lieu_naissance[20];
    char S_familiale[20];
    int N_enfants;
    char S_cnss[30];
    date expiration_cin;
}employee;
int main()
{
    return 0;
}
