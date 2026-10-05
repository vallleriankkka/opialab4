#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "");

    int A, B, C;
    int result;
    printf("Для успешной калибровки каждый параметр должен быть кратен трём\n");
    printf("Введите три параметра для калибровки через запятую: \n");
    scanf("%d, %d, %d", &A, &B, &C);


    result = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));

    result && printf("Калибровка успешна\n");
    !result && printf("Калибровка не удалась\n");

    return 0;
}