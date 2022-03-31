#include <stdio.h>
#include <stdlib.h>
#include "List.h"
#include "Bread.h"

void init(List * list) {
    list -> head = NULL;
    list -> tail = NULL;
    Node * cur = NULL;
    list -> count = 0;
}

void append(List * list, Data data) {
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode -> val = data;
    newNode -> next = NULL;
    if (isEmpty(list)) {
        list -> head = newNode;
        list -> tail = newNode;
    }
    else {
        insertLast(list, newNode);
    }
    list -> count++;
}

void insert(List * list, int pos, Data data) {
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode -> val = data;
    newNode -> next = NULL;
    if (isEmpty(list)) {
        list -> head = newNode;
        list -> tail = newNode;
    }
    else {
        if (pos == 0) {
            insertFirst(list, newNode);
        }
        else if (pos == list->count) {
            insertLast(list, newNode);
        }
        else {
            Node * cur = list -> head;
            for (int i = 0; i < pos-1; i++) {
                cur = cur->next;
            }
            newNode->next = cur -> next;
            cur -> next = newNode;
        }
    }
    list -> count++;
}


int isEmpty(List * list) {
    return list -> head == NULL;
}

static void insertFirst(List * list, Node * newNode) {
    newNode -> next = list -> head;
    list -> head = newNode;
}

static void insertLast(List * list, Node * newNode) {
    list -> tail -> next = newNode;
    list -> tail = newNode;
}

void replace(List * list, int pos, Data data) {
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->val = data;
    newNode->next = NULL;
    Node * cur = list -> head;
    if (pos == 0) {
        newNode->next = list->head->next;
        list->head = newNode;
    }
    else if (pos == list->count) {
        insertLast(list, newNode);
    }
    else {
        for (int i = 0; i < pos-1; i++) {
            cur = cur->next;
        }
        newNode->next = cur -> next -> next;
        cur -> next = newNode;
    }
}

Data delete(List * list, int pos) {
    Node * cur = list -> head;
    Node * removed;
    if (pos == 0) {
        removed = removeFirst(list);
    }
    else {
        for (int i = 0; i < pos-1; i++) {
            cur = cur->next;
        }
        if (pos+1 == list->count) {
            removed = cur -> next;
            cur -> next = NULL;
            list -> tail = cur;
        }
        else {
            removed = cur -> next;
            cur -> next = cur -> next -> next;
        }
    }
    Data removedData = removed->val;
    free(removed);
    list -> count--;
    return removedData;
}

static Node * removeFirst(List * list) {
    Node * removed = list -> head;
     list -> head = list -> head ->next;
     // free(list->head);
    return removed;
}

// static Data removeLast(List * list) {
//     Node * cur = list -> head;
//     for (int i = 0 ; i < pos-1; i++) {
//         cur = cur->->next;
//     }
//     cur -> next = NULL;
//     list -> count--;
// }

int isInList(List * list, ID name) {
    Node * cur = list -> head;
    for (int i = 0; i < list -> count; i++) {
        if (isSame(cur->val.name, name)) {
            return TRUE;
        }
        cur = cur->next;
    }
    return FALSE;
}

Data getEntry(List * list, int pos) {
    Node * cur = list -> head;
    for (int i = 0 ; i < pos; i++) {
        cur = cur->next;
    }

    return cur->val;
}

int getPosition(List * list, ID name) {
    Node * cur = list -> head;
    for (int i = 0 ; i < list -> count; i++) {
        if (isSame(cur->val.name, name)) {
            return i+1;
        }
        cur = cur->next;
    }
    return -1;
}

void display(List * list) {
    Node * cur = list -> head;
    for (int i = 0 ; i < list -> count; i++) {
        printf("%d\n", i+1);
        print(cur->val);
        printf("\n");
        cur = cur->next;
    }
}
