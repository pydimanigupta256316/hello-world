#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
int addrecord(int read)
{if(read==0)
      {  
        system("cls");
        FILE *f;
        f=fopen("record.csv","a+");
        printf("\n Enter name: ");
        scanf("%s",p.name);
        printf("\nEnter the address: ");
      scanf("%s",p.address);
        printf("\nEnter father name: ");
      scanf("%s",p.father_name);
        printf("\nEnter mother name: ");
      scanf("%s",p.mother_name);
        printf("\nEnter phone no.:");
        scanf("%ld",&p.mble_no);
        printf("Enter sex:");
      scanf("%s",p.sex);
        printf("\nEnter e-mail:");
        scanf("%s",p.mail);
        printf("\nEnter citizen no:");
      scanf("%s",p.citision_no);
        fwrite(&p,sizeof(p),1,f );
        printf("\n");
        fflush(stdin);
        printf("\nrecord saved");
       

fclose(f);

    printf("\n\nEnter any key");
    system("cls");
    return 1;
}
else
{  FILE *f;
  f=fopen("record.csv","w");
  fwrite(&p,sizeof(p),1,f);
    fflush(stdin);
      printf("\nrecord saved");
      fclose(f);
       return 1;
  }


}