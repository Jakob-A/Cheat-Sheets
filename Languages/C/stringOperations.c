/**
 * @file stringOperations.c
 * @author Jakob Arndt (jakob@jkbob.de)
 * @brief simple string operations, one need from time to time in C programming
 * @version 0.1
 * @date 2022-07-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * just concatenates the given strings
 * @param string1
 * @param string2
 * @return the concatenated string
 */
char * concatenate_two_strings(char * string1 , char * string2){

    int len = strlen(string1) + strlen(string2) + 1;
    char * result = malloc(len);
    if(result == NULL){
        errLOG("Error while allocating memory");
        return NULL;
    }

    //dLOG("Concatenate: %s and %s", string1, string2);

    sprintf(result, "%s%s", string1 , string2);

    return result;
}

/**
 * converts the given parameter into a string
 * @param x
 * @return the transformed integer as a string
 */
char * integer_tostring(int x){
    /* allocate memory */
    int len = (x != 0) ? (int)log10(x) + 2 : 2;
    char * string = malloc(len);
    if (string == NULL){
        errLOG("Error while allocating memory");
        return NULL;
    }

    /* copy integer into string */
    snprintf(string, len,  "%i", x);

    return string;
}