#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)

{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

int main() {
    gotoxy(20, 20);

    // ������ �ؽ�Ʈ

    printf("\033[31m�� �ؽ�Ʈ�� �������Դϴ�.\033[0m\n");

    gotoxy(5, 10);

    // �ʷϻ� �ؽ�Ʈ�� ����� ���

    printf("\033[32m\033[43m�����ȳ���\033[0m\n");

    gotoxy(15, 13);

    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ

    printf("\033[1m\033[34m�� �ؽ�Ʈ�� ���� �Ķ����Դϴ�.\033[0m\n");



    return 0;
}