/**
 * @file fileOperations.c
 * @author Jakob Arndt (jakob@jkbob.de)
 * @brief functions I wrote some time ago, for C file handling
 * @version 0.1
 * @date 2022-07-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <dirent.h>

#define BUFFER_SIZE 20

/**
 * function reads file until EOF
 * @param fd - file descriptor
 * @param output - text of the file will be copied into output
 * @return size of output on success , -1 on failure
 */
int read_file(int fd, char ** output){

    int check;
    int size = 0;
    int zero = 1;
    char buffer[BUFFER_SIZE];

    *output = malloc(1);
    if (output == NULL){
        errLOG("Could not allocate enough memory");
        return -1;
    }

    // read until read() returns zero
    while ((check = read(fd, buffer, BUFFER_SIZE)) != 0){
        if(check == -1){
            errLOG("Could not read file");
            return -1;
        }
        size += check;
        *output = realloc(*output , size);
        if (output == NULL){
            errLOG("Could not allocate enough memory");
            return -1;
        }
        memcpy(*output + size - check, buffer, check);
        zero = 0;
    }

    if (zero) {
        free(output);
        output = NULL;
    }


    return size;
}

/**
 * opens a file, writes the string value to it and closes the file
 * @param filepath path to the file
 * @param value string that will be written into the file
 * @param flag the flag that should be used
 * @return 0 on success , -1 on failure
 */
int open_write_close(char * filepath, char * value, int flag){

    int fd = open(filepath, flag);
    if(fd == -1){
        errLOG("Error while opening the sys file: %s", filepath);
        return -1;
    }

    if(write(fd, value, strlen(value)) < 0){
        errLOG("Could write on file: %s", filepath);
        close(fd);
        return -1;
    }

    close(fd);

    return 0;
}

/**
 * searches given directory for filename
 * @param directory
 * @param filename
 * @return 1 if the filename was found, 0 if not, -1 on error
 */
int search_directory(char * directory, char * filename){

    DIR *dir;
    struct dirent * entry;

    /* open directory */
    dir = opendir(directory);
    if (dir == NULL){
        errLOG("Directory: %s could not be opened", directory);
        return -1;
    }

    /* search for filename */
    while ((entry = readdir(dir))){
        if (strcmp(filename, entry->d_name))
            return 1;
    }

    return 0;
}