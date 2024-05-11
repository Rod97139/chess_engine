// misc.c

#include "defs.h"
#include "stdio.h"

#ifdef WIN32
#include "windows.h"
#else
#include "time.h"
#endif

int GetTimeMs() {
#ifdef WIN32
    return GetTickCount();
#else
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    return (int)ts.tv_sec * 1000 + (int)(ts.tv_nsec / 1000000);
#endif
}