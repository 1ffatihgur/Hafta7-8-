#include<stdio.h>

void bubblesort(int array[], int size)
{
	
	int temp=0;
	int i,j;
	
	for(i=0; i<size; i++)
	{
		for(j=1; j<size-1; j++)
		{
			if(array[j-1] > array[j])
			{
				temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp; 
			}
		}
	}	
}


int main()
{
	
	int dizi[50];
	int boyut;
	int a,b;
	
	printf("eleman sayisi: ");
	scanf("%d",&boyut);
	
	for(a=0; a<boyut; a++)
	{
		scanf("%d",&dizi[a]);
	}
	
	bubblesort(dizi,boyut);
	
	for(a=0; a<boyut; a++)
	{
		printf("%d ",dizi[a]);
	}



	return 0;
}
