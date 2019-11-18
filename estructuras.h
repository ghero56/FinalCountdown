#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>

typedef struct _monkey mono;

struct _monkey{
	int real;
	int img;
};

typedef struct _bigape poli;

struct _bigape{
	mono initial;
	mono *sig;
};

#endif
