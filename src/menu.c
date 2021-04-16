#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
int menu()
{char t;
    system("cls");
printf("\t\t**********WELCOME TO PHONEBOOK*************");
printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete");
scanf("%c",&t);

switch(t)
{
    case '1':
    addrecord(0);
    return 1;
    break;
    case '2':
    printlist(0);
    return 2;
    break;
    case '3':
     exit(0);
     return 3;
    break;
    case '4': 
    modifyrecord(0);
    return 4;
    break;
    case '5': 
    searchrecord(0,"");
    return 5;
    break;
    case '6': 
    deleterecord(0,"");
    return 6;
    break;
    default:
                {system("cls");
                printf("\nEnter 1 to 6 only");
                menu();
                }
}}