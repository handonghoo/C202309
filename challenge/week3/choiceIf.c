#include <stdio.h>

int main()
{
	int choice;
	// 메뉴얼을 출력합니다. 
	printf("1.파일저장\n");
	printf("2.저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);
	// 입력받은 값에따라 다른 문장을 출력합니다.
	if (choice == 1)
	{
		printf("파일을저장합니다.\n");
	}
	else if (choice == 2)
	{
		printf("저장 없이 닫습니다. \n");
	}
	else if (choice == 3)
		printf("종료합니다. ");
	else
		printf("잘못 입력하셨습니다. ");
	return 0;
}