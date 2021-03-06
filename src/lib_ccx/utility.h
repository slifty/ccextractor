#ifndef CC_UTILITY_H
#define CC_UTILITY_H

#ifndef _WIN32
	#include <arpa/inet.h>
#endif

#define RL32(x) (*(unsigned int *)(x))
#define RB32(x) (ntohl(*(unsigned int *)(x)))
#define RL16(x) (*(unsigned short int*)(x))
#define RB16(x) (ntohs(*(unsigned short int*)(x)))

extern int temp_debug;
void init_boundary_time (struct ccx_boundary_time *bt);
void print_error (int mode, const char *fmt, ...);
int stringztoms (const char *s, struct ccx_boundary_time *bt);
#endif
