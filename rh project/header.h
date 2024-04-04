#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
/* structure date */
typedef struct{
    int year ;
    int month ;
    int day ;
}date;
/* structure employee */
typedef struct {
    char matricule[10];
    char nom[20];
    char prenom[20];
    char CIN[10];
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
/*   les procedures  */
void ADD(); /* for add employee */
void UPDATE(){}; /* update information for employee  */
void DELETE(){}; /* Delete employee */
void SEARCH(){}; /* Search by ID for employee */

/* detail procedure ADD */
void ADD()
{
    employee emp ;
    char test[20];
    int x = 0 ;
    FILE* fp;

    fp = fopen("employee.txt","a+");
    if(fp==NULL)
    {
        printf("has been an error !! \n");
        exit(1);
    }
    printf("matricul : ");scanf("%s",test);
    while(!feof(fp))
    {
    fscanf(fp," %s  \n%s \n%s \n%s \n%s\n%s\n%d %d %d \n%s\n",emp.matricule,emp.CIN,emp.nom,emp.prenom,emp.address,emp.ville,&emp.date_naissance.year,&emp.date_naissance.month,&emp.date_naissance.day,emp.telephone);
        if(strcmp(emp.matricule,test)==0)
        {
            x++;
        }
    }
    if(x==0)
    {
    printf("CIN : ");scanf("%s",emp.CIN);
    printf("Name : ");scanf("%s",emp.nom);
    printf("Surname : ");scanf("%s",emp.prenom);
    printf("Address : "); scanf(" %99[^\n]", emp.address);
    printf("City : "); scanf("%s",emp.ville);
    printf("Birth Date : \n");
    printf("Year : "); scanf("%d",&emp.date_naissance.year);
    printf("Month : "); scanf("%d",&emp.date_naissance.month);
    printf("Day : "); scanf("%d",&emp.date_naissance.day);
    printf("Number phone : ");scanf("%s",emp.telephone);
    fprintf(fp,"%s \n%s \n%s \n%s\n%s\n%d %d %d \n%s\n",test,emp.CIN,emp.nom,emp.prenom,emp.address,emp.ville,emp.date_naissance.year,emp.date_naissance.month,emp.date_naissance.day,emp.telephone);
    }
    else
    {
        printf("Card id already exist \n");
    }
    fclose(fp);
}

#endif // HEADER_H_INCLUDED
