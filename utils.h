#pragma once

#include "student.h"

#define MAX_BUFFER_SIZE 1024

typedef enum SortBy {
  ID,
  NAME
} SortBy;

SortBy setSortBy(const char *filename);

int countLines(FILE *input);

void swap(Student *a, Student *b);
