/**
 * @file header.h
 * @author mani gupta
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef header_h
#define header_h
/**
 * @brief for details of a contact
 * 
 */
struct person
{
    char name[35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];

}p;
int  menu(); //it gives what all the features in the code
void start();//code will start from here
void back(); //if u want go back to start
int addrecord(int read);//to add details of a contact
int printlist(int read);//to view the contact list
int  modifyrecord(int read);//to modify any details of a contact
int  deleterecord(int read,char temp[]);//to delete any conatct in a list
int  searchrecord(int read,char temp[]);//to search any contact in the list 

#endif