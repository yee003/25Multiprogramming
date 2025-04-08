#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)

{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

int main() {
    gotoxy(20, 20);

    // 빨간색 텍스트

    printf("\033[31m이 텍스트는 빨간색입니다.\033[0m\n");

    gotoxy(5, 10);

    // 초록색 텍스트와 노란색 배경

    printf("\033[32m\033[43m오류안난다\033[0m\n");

    gotoxy(15, 13);

    // 굵은 텍스트와 파란색 텍스트

    printf("\033[1m\033[34m이 텍스트는 굵고 파란색입니다.\033[0m\n");



    return 0;
}