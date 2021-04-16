#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"
int  deleterecord(int read,char tmp[])
{
    struct person p;
    FILE *f,*ft;
	int flag;
	char name[100];
	f=fopen("record.csv","a+");
	if(f==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");

		}
	else
	{	printf("Enter CONTACT'S NAME:");
		if(read==0)
		scanf("%s",name);
		else
		strcpy(name,tmp);

		fflush(stdin);
		while(fread(&p,sizeof(p),1,f)==1)
		{
			if(strcmp(p.name,name)!=0)
				fwrite(&p,sizeof(p),1,f);
			if(strcmp(p.name,name)==0)
                flag=1;
		}
	fclose(f);
	
	if(flag!=1)
	{
		printf("NO CONACT'S RECORD TO DELETE.");
		
		return 0;
	}
		else
		{
			
			printf("RECORD DELETED SUCCESSFULLY.");
			return 1;
		}
	
}
}