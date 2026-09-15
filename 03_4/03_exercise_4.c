#include <stdio.h>

int main(void)
{
    float numerator, denominator;

    printf("분자를 입력하세요 : ");
    scanf("%f", &numerator);

    printf("분모를 입력하세요 : ");
    scanf("%f", &denominator);

    printf("나누기의 결과는 %f 입니다.\n", numerator/denominator);

    return 0;

}