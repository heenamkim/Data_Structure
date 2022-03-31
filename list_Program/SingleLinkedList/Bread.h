#ifndef BREAD_H
#define BREAD_H

#define TRUE 1
#define FALSE 0

typedef char * ID;

typedef struct Bread {
    char name[100];
    char type[100];
    int count;
} Bread;

void print(Bread bread);
Bread input();
int isSame(ID name1, ID name2);

#endif
