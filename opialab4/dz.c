#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "");

    int A, B, C;
    printf("Для успешной калибровки каждый параметр должен быть кратен трём\n");
    printf("Введите параметр A для калибровки: \n");
    scanf("%d", &A);

    printf("Введите параметра B для калибровки: \n");
    scanf("%d", &B);

    printf("Введите параметра C для калибровки: \n");
    scanf("%d", &C);

    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) 
    {
        printf("Калибровка успешна\n");
    }
    else {
        printf("Ошибка калибровки\n");
    }

    return 0;
}