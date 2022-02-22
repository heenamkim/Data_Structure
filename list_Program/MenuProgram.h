#ifndef MENUPROGRAM_H
#define MENUPROGRAM_H

#include "ArrayList.h"
#include "Bread.h"

#define PROGRAM_NAME    "BREAD"

#define ENTER   1
#define EXIT    0

#define APPEND  1
#define INSERT  2
#define MODIFY  3
#define DELETE  4
#define SEARCH  5
#define DISPLAY 6
#define CLEAR   7

void runProgram();

void initData(List * list);
void appendData(List * list);
void insertData(List * list);
void replaceData(List * list);
void removeData(List * list);
void searchData(List * list);
void displayData(List * list);

#endif
