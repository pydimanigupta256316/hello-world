#include "unity.h"
#include "header.h"
#include <string.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME  "contact"
int b=0;
int valid=1;
int ok=1;
/* Prototypes for all the test functions */
void test_addrecord(void);
void test_deleterecord(void);
void test_printlist(void);
void test_searchrecord(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addrecord);
 RUN_TEST(test_deleterecord); 
  RUN_TEST(test_printlist);
  RUN_TEST(test_searchrecord);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecord()
{

  TEST_ASSERT_EQUAL(1,searchrecord(1,"mani"));
  TEST_ASSERT_EQUAL(0,searchrecord(1,"random"));

}
void test_menu()
{
  TEST_ASSERT_EQUAL(1,menu(1));
  TEST_ASSERT_EQUAL(2,menu(2));
  TEST_ASSERT_EQUAL(3,menu(3));
  TEST_ASSERT_EQUAL(4,menu(4));
  TEST_ASSERT_EQUAL(5,menu(5));
  TEST_ASSERT_EQUAL(6,menu(6));
}

void reset_struct()
{
  strcpy(p.name,"mani");
  strcpy(p.address,"andhrapradesh");
  p.mble_no=8247;
  strcpy(p.mail,"pydimanigupta123@gmail.com");
  strcpy(p.father_name,"L&t");
  strcpy(p.mother_name,"manager");
  strcpy(p.citision_no,"nani");
}


void test_deleterecord()
{
  TEST_ASSERT_EQUAL(1,deleterecord(1,"mani"));
  TEST_ASSERT_EQUAL(1,deleterecord(1,"yamm"));
  
}
void test_printlist()
{
  TEST_ASSERT_EQUAL(1,printlist(1));
  
}

/* Write all the test functions  */
void test_addrecord(void) {
  reset_struct();
  TEST_ASSERT_EQUAL(1, addrecord(1));
  strcpy(p.name,"M");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  strcpy(p.name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  strcpy(p.name,"M2M");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  reset_struct();
  strcpy(p.citision_no,"M");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  strcpy(p.mother_name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  strcpy(p.father_name,"M2M");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  reset_struct();
  strcpy(p.address,"Mu");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  strcpy(p.address,"Mummmmmmmmmmmmmmmmmmm");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  reset_struct();
  p.mble_no=9004;
  TEST_ASSERT_EQUAL(1, addrecord(1));
  p.mble_no=90040;
  TEST_ASSERT_EQUAL(1, addrecord(1));
  reset_struct();
  strcpy(p.mail,"mani");
  TEST_ASSERT_EQUAL(1, addrecord(1));
  reset_struct();
  
}