/*--------------------------------------------------------------------------
STDDEF.H

Standard definitions.
Copyright (c) 1988-2001 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
--------------------------------------------------------------------------*/


#ifndef NULL
 #define NULL ((void *) 0)
#endif

#ifndef _SIZE_T
 #define _SIZE_T
 typedef unsigned int size_t;
#endif

#ifndef _STDDEF_INCLUDED
#define _STDDEF_INCLUDED

typedef int          ptrdiff_t;
#define offsetof(s,m)	(size_t)&(((s *)0)->m)

#endif
