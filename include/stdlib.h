/*
 * stdlib.h compatibility shim
 * Public domain
 */

#include_next <stdlib.h>

#ifndef LIBCOMPAT_STDLIB_H
#define LIBCOMPAT_STDLIB_H

#include <sys/stat.h>
#include <sys/time.h>
#include <stdint.h>

#ifndef HAVE_ARC4RANDOM_BUF
uint32_t arc4random(void);
uint32_t arc4random_uniform(uint32_t);
#endif

#ifndef HAVE_REALLOCARRAY
void *reallocarray(void *, size_t, size_t);
#endif

#ifndef HAVE_SETPROCTITLE
void setproctitle(const char *fmt, ...);
#endif

#ifndef HAVE_STRTONUM
long long strtonum(const char *nptr, long long minval,
		long long maxval, const char **errstr);
#endif

#endif
