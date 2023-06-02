#include<stdio.h>
#include<string.h>


typedef struct 
{
	char name[50];
	char branch[50];
	int ID_no;
} stu;

int main()
{
	
	stu st1, st2;
	
	strcpy(st1.name, "Fatih");
	strcpy(st1.branch, "Computer Engineering");
	st1.ID_no = 2110213002;
	
	strcpy(st2.name, "Elif");
	strcpy(st2.branch, "Computer Engineering");
	st2.ID_no = 2110213008;
	
	printf("Name: %s\n",st1.name);
	printf("Branch: %s\n",st1.branch);
	printf("ID No: %d\n\n",st1.ID_no);
	
	printf("Name: %s\n",st2.name);
	printf("Branch: %s\n",st2.branch);
	printf("ID No: %d",st2.ID_no);
	return 0;
}
