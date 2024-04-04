#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
int main()
{
    int choose ;
   do
   {
        system("CLS");
        printf("\t\t\tMy Company\n\n");
        printf("1- Add employee \t 2- update employee \t 3- delete employee \t 4- search by id \t 5-exit \n\n");
        printf("choose your space : ");scanf("%d",&choose);
        switch(choose)
        {
            case 1   : ADD();       break;
            case 2   : UPDATE();    break;
            case 3   : DELETE();    break;
            case 4   : SEARCH();    break;
            case 5   : printf("fin the programme \n"); break;
            default  : printf("Please enter number between 1 - 5\n"); break;
        }

   }while(choose!=4);



    return 0;
}
