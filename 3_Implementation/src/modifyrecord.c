#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
int  modifyrecord(int read)
{
    int c;
    FILE *f;
    int flag=0;
    struct person p,s;
	char  name[50];
	f=fopen("record.csv","r+");
	if(f==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");
			exit(1);


		}
	else
	{
	    system("cls");
		printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
            scanf("%s",name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {



                    printf("\n Enter name:");
                    scanf("%s",s.name);
                    printf("\nEnter the address:");
                    scanf("%s",s.address);
                    printf("\nEnter father name:");
                    scanf("%s",s.father_name);
                    printf("\nEnter mother name:");
                    scanf("%s",s.mother_name);
                    printf("\nEnter phone no:");
                    scanf("%ld",&s.mble_no);
                    printf("\nEnter sex:");
                    scanf("%s",s.sex);
                    printf("\nEnter e-mail:");
                    scanf("%s",s.mail);
                    printf("\nEnter citizen no\n");
                    scanf("%s",s.citision_no);
                    fseek(f,sizeof(p),SEEK_CUR);
                    fwrite(&s,sizeof(p),1,f);
                    flag=1;
                    break;



                }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");
                return 1;

            }
            else
            {
                    printf(" \n data is not found");
                     return 0;
            }
            fclose(f);
	}

	

}
