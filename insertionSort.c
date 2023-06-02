#include<stdio.h>



void insertionSort(int dizi[], int adet)
{
	
	int i,j;
	int key;
	
	for(i = 1; i<adet; i++)
	{
		key = dizi[i];
		j = i - 1;
		
		while(key<dizi[j] && j >= 0)
		{
			dizi[j+1] = dizi[j];
			j--;
		}
		dizi[j+1] = key;
	}
	
}

int main()
{
	
	int array[100];
	int a,b;
	
	printf("dizi kac elemanli olsun?: ");
	scanf("%d",&a);
	
	for(b=0; b<a; b++)
	{
		printf("%d. sayiyi girin: ",b+1);
		scanf("%d",&array[b]);
	}
	

	insertionSort(array,a);
	
	for(b=0; b<a; b++)
	{
		printf("%d ",array[b]);
	}
	
	return 0;
}
