#include <stdio.h>
#include <string.h>
#define GOOD 0xFACE
#define BAD   0xBAD
int main(void)
{

	int i;
	i = 0xBADFACE;
	printf("\ni = %x\n",i);
	printf("done ");
	return 0;
}

