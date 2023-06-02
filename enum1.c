#include<stdio.h>

enum renk 
{
	mavi, turuncu, mor
};


int main()
{
	
	enum renk e1,e2,e3;
	
	e1 = mavi;
	e2 = turuncu;
	e3 = mor;
	
	printf("%d %d %d\n",e1,e2,e3);
	printf("%d %d %d",mavi,turuncu,mor);

	
}
