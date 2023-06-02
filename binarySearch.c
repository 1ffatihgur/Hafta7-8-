#include<stdio.h>

int binarySearch(int dizi[], int bas, int son, int aranan)
{
	
	while(son>=bas)
	{
		int orta = dizi[(bas + son) / 2];
		if(orta == aranan)
		return 1;
		if(orta < aranan)
		bas++;
		if(orta > aranan)
		son--;	
	}
	return -1;
	
}

int main()
{
	
	int boyut,i,ara;
	
	printf("kac elemanli olsun?: ");
	scanf("%d",&boyut);	
	
	int dizi[boyut];
	
	for(i=0; i<boyut; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("hangi sayiyi ariyorsun?: ");
	scanf("%d",&ara);
	
	int sonuc = binarySearch(dizi, 0, boyut-1, ara);
	
	if(sonuc == -1)
	printf("aradiginiz sayi dizide yok");
	else
	printf("sayi dizide var ve %d!!",ara);
	
	return 0;
}
