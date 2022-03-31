#ifndef LIST_H
#define LIST_H
#include "Bread.h"

#define TRUE        1
#define FALSE       0

typedef Bread Data;

typedef struct Node {
    Data val;
    struct Node * next;
} Node;

typedef struct CircularList {
    struct Node * head;
    struct Node * tail;
    int count;
} CircularList;
typedef CircularList List;

// void error(char *message);
void init(List * list);
void append(List * list, Data data);
void insert(List * list, int pos, Data data);
int isEmpty(List * list);
void replace(List * list, int pos, Data data);
Data delete(List * list, int pos);
int isInList(List * list, ID name);
Data getEntry(List * list, int pos);
int getPosition(List * list, ID name);
void display(List * list);

static void insertFirst(List * list, Node * newNode);
static void insertLast(List * list, Node * newNode); // append 와 동일
static Node * removeFirst(List * list);
static Data removeLast(List * list, int pos);

// static int isCorrectPosition(List *list, int pos);

#endif
