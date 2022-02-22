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

typedef ArrayList List;

void error(char *message);
void init(List * list);
void append(List * list, Data data);
void insert(List * list, int pos, Data data);
Data delete(List * list, int pos);
void replace(List * list, int pos, Data data);
int isInList(List * list, Data data);
Data getEntry(List * list, int pos);
int getPosition(List * list, ID name);
int isEmpty(List * list);
int isFull(List * list);
void display(List * list);

static int isCorrectPosition(List *list, int pos);

#endif
