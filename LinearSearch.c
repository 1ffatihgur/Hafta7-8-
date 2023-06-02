#include<stdio.h>



int LinearSearch(int array[], int boyut, int aranan)
{
	
	int i;
	for(i=0; i<boyut; i++)
	{
		if(aranan == array[i])
		{
			return array[i];
		}
		else
		{
			return -1;
		}
	}
	
	
}


int main()
{
	
	int a,b,c;
	int sonuc;
	
	printf("dizi kac elemanli olsun?: ");
	scanf("%d",&a);
	
	int dizi[a];
	
	for(b=0; b<a; b++)
	{
		printf("%d. sayiyi giriniz: ",b+1);
		scanf("%d",&dizi[b]);
	}
	
	printf("hangi sayiyi ariyorsunuz?: ");
	scanf("%d",&c);
	
	sonuc = LinearSearch(dizi, a, c);
	
	if(sonuc == -1)
	{
		printf("aranan sayi dizide yok!");
	}
	else
	{
		printf("aranan sayi dizide var ve %d!",c);
	}
	
	
	return 0;
}
