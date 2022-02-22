#include <stdio.h>
#include <string.h>
#include "Bread.h"

void print(Bread bread) {
    printf("name : %s\n", bread.name);
    printf("type: %s\n", bread.type);
    printf("count: %d\n", bread.count);
}

Bread input() {
    Bread input;
    printf("name: ");
    scanf("%s", input.name);
    printf("type: ");
    scanf("%s", input.type);
    printf("count: ");
    scanf("%d", &input.count);
    return input;
}
int isSame(ID name1, ID name2) {
    return strcmp(name1, name2) == 0;
}
