#include <stdio.h>
#include <stdlib.h>

void panic(char *m)
{
	fprintf(stderr, "%s", m);
	abort();
}
