#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char guho[128];
void thankyou(int bb);
void die(int time);
int main(void)
{
	int choice = 0, num=1,thanks=0;
	printf("게임을 시작하시겠습니까?\n1.네  2.아니요\n당신의 선택은?:");
	scanf("%d", &choice);
	if (choice == 1) {
		Sleep(500);
		printf("좋아요\n");
	}
	else
		printf("그냥 하세요\n");
	Sleep(1000);
	printf("먼저 이름을 입력해주세요:");
	scanf("%s", guho);
	do {
		printf("질문 %d %s씨는 히오스를 좋아하시나요?(1은 네 2는 아니요):", num++,guho);
		scanf("%d", &choice);
	} while (choice != 1);
	Sleep(1000);
	printf("좋은 현상이네요.\n");
	Sleep(1000);
	printf("질문 %d 게임이 유익하셨나요?(1은 네 2는 아니요):",num);
	scanf("%d", &choice);
	if (choice == 1)
		thankyou(thanks);

	else
		die(num);

	return 0;

}
void thankyou(int bb)
{
	printf("사랑해요  ");
	bb++;
	Sleep(5);
	if (bb == 400)
		return;
	else
		thankyou(bb);
}
void die(int time)
{
	int delay;
	printf("게임이 종료되었습니다\n");
	printf("총 %d 번의 질문을 받으셨습니다\n",time);
	printf("%s",guho);
	for (delay = 1;delay <= 10;delay++) {
		Sleep(200);
		printf(".");
	}
	printf("\n수고하셨습니다\n");
	Sleep(3000);
	return;
}
