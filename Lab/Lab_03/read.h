#ifndef READ_H_   /* Include guard */
#define READ_H_
#include "matrix.h"
#include "alloc.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int mm_read (char* filename, matrix* mat);

#endif