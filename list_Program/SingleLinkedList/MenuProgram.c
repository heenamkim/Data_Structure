#include <stdio.h>
#include "MenuProgram.h"

// 한 번에 컴파일 하는 방법
// gcc -g *.c -> a.exe
// gcc -o main -g *.c -> main.exe

void runProgram() {
    printf("%s 관리프로그램\n", PROGRAM_NAME);
    printf("1. append\n");
    printf("2. insert\n");
    printf("3. modify\n");
    printf("4. delete\n");
    printf("5. search\n");
    printf("6. isInList\n");
    printf("7. getEntry\n");
    printf("8. display\n");
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
    printf("삽입할 위치를 입력해 주세요 (1~%d) >> ", list->count+1);
    int pos;
    scanf("%d", &pos);

    insert(list, pos-1, data);
}

void replaceData(List * list) {
        printf("삽입할 위치를 입력해 주세요 (1~%d) >> ", list->count);
        int pos;
        scanf("%d", &pos);
        printf("새로운 정보를 입력해 주세요\n");
        Data data = input();

        replace(list, pos-1, data);
}

void removeData(List * list) {
    printf("삭제할 위치를 입력해 주세요 (1~%d) >> ", list->count);
    int pos;
    scanf("%d", &pos);
    delete(list, pos-1);
}

void searchData(List * list) {
    printf("찾고싶은 정보를 입력해 주세요 >> ");
    char name[10];
    scanf("%s", name);
    if (getPosition(list, name) != -1) {
        printf("찾고싶은 정보의 위치는 %d 입니다.", getPosition(list, name));
    }
    else {
        printf("찾고싶은 정보의 위치는 존재하지 않습니다.");
    }
    // 이름을 입력 받아서 getposition 통해서 위치를 받고 있으면 위치를 출력 없으면 -1이 나오니까 없다고 출력
}

void isInListData(List * list) {
    char name[10];
    printf("찾고싶은 이름을 입력해 주세요 >> ");
    scanf("%s", name);
    if (isInList(list, name) == TRUE) {
        printf("찾고싶은 이름이 리스트 안에 있습니다.");
    }
    else {
        printf("찾고싶은 이름이 리스안에 존재하지 않습니다.");
    }
}

void getEntryData(List * list) {
    int pos;
    printf("찾고싶은 정보의 위치를 입력해 주세요 (1~%d) >> ", list->count);
    scanf("%d", &pos);
    Bread bread = getEntry(list, pos-1);
    printf("정보를 출력합니다.\n");
    printf("-----------------\n");
    print(bread);
    printf("-----------------\n");
}

void displayData(List * list) {
        display(list);
}
