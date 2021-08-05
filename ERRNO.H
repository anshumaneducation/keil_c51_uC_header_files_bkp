/*--------------------------------------------------------------------------
ERRNO.H

ANSI standard include file.
Copyright (c) 1988-2001 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef	_ERRNO_INCLUDED
#define _ERRNO_INCLUDED
#define errno  (0)

/* Floating point errors, currently not implemented in libraries          */
#define	ERANGE		1	/* Value out of range                     */
#define	EDOM		2	/* Floating point domain error            */

#endif
