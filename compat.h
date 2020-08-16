/*
 * Compatibility definitions for the one true AWK.
 *
 * File created by Albert Wik on 30 Jul 2020; public domain.
 */
#ifndef COMPAT_H
#define COMPAT_H

#ifdef	WANT_WCHAR

#ifdef __DJGPP__
#include <ctype.h>
#include <wchar.h>
#define	NEED_TOWUPPER
wint_t towupper(wint_t wc);
#define	NEED_TOWLOWER
wint_t towlower(wint_t wc);
#endif	/* if __DJGPP__ */

#else	/* else == !WANT_WCHAR */
typedef unsigned char wint_t;
#endif  /* WANT_WCHAR */

#endif  /* COMPAT_H */

