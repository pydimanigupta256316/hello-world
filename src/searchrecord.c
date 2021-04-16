#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
int searchrecord( int read,char tmp[])
{
    struct person p;
FILE *f;
char name[100];

f=fopen("record.csv","r+");
if(f==NULL)
{
    printf("\n error in opening\a\a\a\a");
    exit(1);

}
printf("\nEnter name of person to search\n");
if(read==0)
{scanf("%s",name);
}
else
{strcpy(name,tmp);
}
while(fread(&p,sizeof(p),1,f)==1)
{
    if(strcmp(p.name,name)==0)
    {
        printf("\n\tDetail Information About %s",name);
        printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nCitision no:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);
          return 1;  
    }
        else
        {printf("file not found");
        return 0;
        }

}
 fclose(f);

}