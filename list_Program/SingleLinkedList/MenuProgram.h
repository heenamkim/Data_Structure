#ifndef MENUPROGRAM_H
#define MENUPROGRAM_H

// #include "ArrayList.h"
#include "List.h"
#include "Bread.h"

#define PROGRAM_NAME    "BREAD"

#define ENTER   1
#define EXIT    0

#define APPEND  1
#define INSERT  2
#define MODIFY  3
#define DELETE  4
#define SEARCH  5
#define ISINLIST 6
#define GETENTRY 7
#define DISPLAY 8
#define CLEAR   9

void runProgram();

void initData(List * list);
void appendData(List * list);
void insertData(List * list);
void replaceData(List * list);
void removeData(List * list);
void searchData(List * list);
void getEntryData(List * list);
void isInListData(List * list);
void displayData(List * list);

#endif
