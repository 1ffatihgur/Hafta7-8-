#include <stdio.h>

enum meyve { Karpuz, Kavun, Kiraz, Erik } e;

int main(void)
{
  int option;

  printf("Bir sayi giriniz[0-3]: ");
  scanf("%d", &option);

  e = option;

  switch (e) {
    case Karpuz: printf("Karpuz");
       break;
    case Kiraz: printf("Kiraz");
       break;
    case Erik: printf("Erik");
       break;
    case Kavun: printf("Kavun");
  }
  
  return 0;
}
