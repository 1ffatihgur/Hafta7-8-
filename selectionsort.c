#include<stdio.h>

void selectionsort(int array[], int size)
{
	
	int i,j;
	
	int minimumindex;
	
	for(i=0; i<size; i++)
	{
		minimumindex = 0;
		
		for(j=i+1; j<size; j++)
		{
			if(array[j] < array[minimumindex])
			{
				minimumindex = j;
			}
		}
		
		
		int temp = array[i];
		array[i] = array[minimumindex];
		array[minimumindex] = temp;
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
	
	selectionsort(dizi,boyut);
	
	for(a=0; a<boyut; a++)
	{
		printf("%d ",dizi[a]);
	}



	return 0;
}
