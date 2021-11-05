#include <stdio.h>
#include <stdlib.h>

int main ()
{
int y, *p, x;
	y = 2;
	p = &y;
	x = *p;
	x += 4;
	(*p)++;
	x++;
	(*p) += x; 
	printf("%d",y);
	
	printf("%x\n",&y);
	printf("%x\n",p);
	printf("%x\n",&p);
	printf("%x\n",&x);	
	
	return (0);


}
