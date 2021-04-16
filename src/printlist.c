#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
int printlist(int read)
{char c; 
    struct person p;
    FILE *f;
    
f=fopen("record.csv","r+");
if(f==NULL)
{
printf("\nfile opening error in listing :");
return 0;
exit(0);
}
while(fread(&p,sizeof(p),1,f)==1)
{
     printf("\n\n\n YOUR RECORD IS\n\n ");
     printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\nSex=%s\nE-mail=%s\nCitizen no=%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);

}
return 1;
  
fclose(f);


}