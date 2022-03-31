#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include "Bread.h"

#define TRUE        1
#define FALSE       0
#define LIST_LEN    100

typedef Bread Data;
typedef struct ArrayList {
    Data arr[LIST_LEN];
    int count;
} ArrayList;

// typedef ArrayList List;

void error(char *message);
void init(ArrayList * list);
void append(ArrayList * list, Data data);
void insert(ArrayList * list, int pos, Data data);
Data delete(ArrayList * list, int pos);
void replace(ArrayList * list, int pos, Data data);
int isInList(ArrayList * list, Data data);
Data getEntry(ArrayList * list, int pos);
int getPosition(ArrayList * list, ID name);
int isEmpty(ArrayList * list);
int isFull(ArrayList * list);
void display(ArrayList * list);

static int isCorrectPosition(ArrayList *list, int pos);

#endif
