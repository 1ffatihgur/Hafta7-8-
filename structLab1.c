#include<stdio.h>


struct studentinformation
{
	char name[50];
	char surname[50];
	int number;
	int midGrade;	
};

int main()
{
	
	struct studentinformation bilgi[10];
	
	int n,i;
	
	printf("kac tane ogrencinin bilgisini gireceksiniz?: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		
		printf("Name: ");
		scanf("%s",&bilgi[i].name);
		
		printf("Surname: ");
		scanf("%s",&bilgi[i].surname);
		
		printf("Number: ");
		scanf("%d",&bilgi[i].number);
		
		printf("MidTerm Grade: ");
		scanf("%d",&bilgi[i].midGrade);
	}
	
	for(i=0; i<n; i++)
	{
		
		printf("Name: %s\n",bilgi[i].name);
		printf("Surname: %s\n",bilgi[i].surname);
		printf("Number: %d\n",bilgi[i].number);
		printf("MidTerm Grade: %d\n",bilgi[i].midGrade);
		
		printf("\n\n");
	}
	
	
	return 0;
}
