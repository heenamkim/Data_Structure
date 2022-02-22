#include <stdio.h>
#include "MenuProgram.h"


void runProgram() {
    printf("%s 관리프로그램\n", PROGRAM_NAME);
    printf("1. append\n");
    printf("2. insert\n");
    printf("3. modify\n");
    printf("4. delete\n");
    printf("5. search\n");
    printf("6. display\n");
    printf("0. EXIT\n");
    printf(">> ");
}

void initData(List * list) {
    init(list);
}

void appendData(List * list) {
    printf("정보를 입력해 주세요\n");
    Data data = input();
    append(list, data);
}

void insertData(List * list) {
    printf("정보를 입력해 주세요\n");
    Data data = input();
    printf("삽입할 위치를 입력해 주세요 (1~%d) >> ", list->count);
    int pos;
    scanf("%d", &pos);

    insert(list, pos, data);
}

void replaceData(List * list) {
        printf("삽입할 위치를 입력해 주세요 (1~%d) >> ", list->count);
        int pos;
        scanf("%d", &pos);
        printf("새로운 정보를 입력해 주세요\n");
        Data data = input();

        replace(list, pos, data);
}

void removeData(List * list) {
    printf("삭제할 위치를 입력해 주세요 (1~%d) >> ", list->count);
    int pos;
    scanf("%d", &pos);
    delete(list, pos);
}
void searchData(List * list) {
    printf("찾고싶은 정보를 입력해 주세요 >> ");
    char name[10];
    scanf("%s", name);
    if (getPosition(list, name) != -1) {
        printf("찾고싶은 정보의 위치는 %d 입니다.", list->count);
    }
    else {
        printf("찾고싶은 정보의 위치는 존재하지 않습니다.");
    }
    // 이름을 입력 받아서 getposition 통해서 위치를 받고 있으면 위치를 출력 없으면 -1이 나오니까 없다고 출력
}

void displayData(List * list) {
        display(list);
}
