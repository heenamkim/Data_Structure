#include <stdio.h>
#include "MenuProgram.h"

int main(void) {

	int menu;
	int flag = ENTER;

	List list;
	initData(&list);

	while (flag) {

		runProgram();
		scanf("%d", &menu);

		switch (menu) {
			case APPEND:
				appendData(&list);
				break;
			case INSERT:
				insertData(&list);
				break;
			case MODIFY:
				replaceData(&list);
				break;
			case DELETE:
				removeData(&list);
				break;
			case SEARCH:
				searchData(&list);
				break;
			case DISPLAY:
				displayData(&list);
				break;
			case CLEAR:
				initData(&list);
				break;
			default:
				printf("Exit the Program...\n");
				flag = EXIT;
		}
		printf("\n\n");
	}

	return 0;
}
