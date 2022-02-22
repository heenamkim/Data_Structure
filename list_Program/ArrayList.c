#include <stdio.h>
#include "ArrayList.h"
#include "bread.h"

void init (List * list) {
    list->count = 0;
}

void append (List * list, Data data) {
    if (isFull(list)) {
        printf("리스트가 꽉 찼습니다. 리스트를 비어주세요");
    }
    else {
        list->arr[list->count] = data;
        list->count++;
    }
}

void insert (List * list, int pos, Data data) {
    if (isFull(list)) {
        printf("리스트가 꽉 찼습니다. 리스트를 비어주세요");
    }
    else {
        for (int i = list->count; i > pos; i--) {
            list->arr[i] = list->arr[i-1];
        }
        list->arr[pos-1] = data;
        list->count++;
    }
}

Data delete (List * list, int pos) {
    Data remove_data = list->arr[pos-1];
    for (int i = pos-1; i < list->count-1; i++) {
        list->arr[i] = list->arr[i+1];
    }
    list->count--;
    return remove_data;

}
void replace (List * list, int pos, Data data) {
    list->arr[pos-1] = data;
}

int isInList (List * list, Data data) {
    for (int i = 0; i < list->count; i++) {
        if (isSame(list->arr[i].name, data.name)) {
            return TRUE;
        }
    }
    return FALSE;
}

Data getEntry (List * list, int pos) {
    return list->arr[pos];
}

int getPosition (List * list, ID name) {
    for (int i = 0 ; i < list->count; i++) {
        if (isSame(list->arr[i].name, name)) {
            return i;
        }
    }
    return -1;
}
int isEmpty (List * list) {
    return list->count == 0;
}
int isFull (List * list) {
    return list->count == LIST_LEN;
}
void display (List * list) {
    for (int i = 0 ; i < list->count; i++) {
        printf("%d\n", i+1);
        print(list->arr[i]);
        printf("\n");
    }
}
