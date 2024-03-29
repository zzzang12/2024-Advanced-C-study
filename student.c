#include "student.h"

/* [TODO]
   Implement function createStudents
*/

/* [TODO]
   Implement function newStudent
*/

/* [TODO]
   Implement function appendStudent
*/

void printStudents(FILE *output, Student *students, int length) {
  for (int i = 0; i < length; i++) {
    fprintf(output, "name: %s id: %d\n", students[i].name, students[i].id);
  }
}

/* [TODO]
   Implement function freeStudents
*/
