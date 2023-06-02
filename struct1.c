#include<stdio.h>


struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};

main()
{
	
	struct kitapbilgi kb = {"SekerPortakali", "Vasconcelous", 55, 7.25};
	
	printf("Kitap Adi: %s\n",kb.kitapad);
	
	printf("Yazar: %s\n",kb.yazar);
	
	printf("Fiyat: %d\n",kb.fiyat);
	
	printf("Puan: %.2f",kb.puan);
	
	
	return 0;
}
