/**
 * @file loggingMacros.c
 * @author Jakob Arndt (jakob@jkbob.de)
 * @brief Shows examples for simple logging macros in C
 * @version 0.1
 * @date 2022-07-09
 * 
 */

#include <stdio.h>

/* Error Log */
#define error_fmt(fmt) "ERROR: " fmt "\n"
#define errLOG(fmt, args...) fprintf(stderr, "[%s] " error_fmt(fmt), __FUNCTION__, ##args)

/* Debug Log */
extern int VERBOSE;
#define dLOG(fmt, args...) ({\
    if (VERBOSE == 1){\
        printf("[%20s] LOG: ", __FUNCTION__);\
        printf(fmt"\n", args);\
    }\
})