#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include "libat/parsetime.h"

#include "const-c.inc"

MODULE = Time::At		PACKAGE = Time::At		

INCLUDE: const-xs.inc

time_t
_parsetime(ct, argc, argv)
	time_t ct
	int argc
	char *argv
CODE:
	RETVAL = parsetime(ct, argc, (char **) argv);
OUTPUT:
	RETVAL
