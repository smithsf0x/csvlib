/*
* @Author: smithsf0x
* @Date:   2015-12-27 01:16:10
* @Last Modified by:   smithsf0x
* @Last Modified time: 2016-01-06 14:46:01
*/

#ifndef CSVLIB_H
#define CSVLIB_H

size_t getline(char **lineptr, size_t *n, FILE *stream);
int* readCSV(const char * path);


#endif
