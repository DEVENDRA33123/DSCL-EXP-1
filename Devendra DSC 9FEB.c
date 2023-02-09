#include <stdio.h>

int main()
{
	int x=2;
	int *p=&x;
	printf("\n\t value of x  %d\n\t address of x %d\n\t value of read value of pointer %d\n\t memory location of pointer %d\n\t memory location of pointed subject (here x)) %d\n\t",x,&x,*p,&p,p);

return 0;
}
