#include "config.h"
#include "compat.h"
#ifdef	WANT_WCHAR
#include <wchar.h>
#endif

#ifdef	NEED_TOWUPPER
wint_t towupper(wint_t wc)
{
	if (wc >= 0 && wc < 256)
		return toupper(wc & 0xFF);

	return wc;
}
#endif

#ifdef	NEED_TOWLOWER
wint_t towlower(wint_t wc)
{
	if (wc >= 0 && wc < 256)
		return tolower(wc & 0xFF);

	return wc;
}
#endif

