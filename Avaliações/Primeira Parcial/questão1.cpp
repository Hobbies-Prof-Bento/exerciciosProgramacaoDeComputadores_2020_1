#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, *p;
i = 3;
p = &i;
printf("%d\n",i);
printf("%x\n",p);
printf("%x\n",&i);
printf("%x\n",&p);

}
