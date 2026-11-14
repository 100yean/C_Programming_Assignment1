
#include <stdio.h>

void discount(int* price, int n, int percent) {
    for (int i = 0; i < n; i++) {
        price[i] = price[i] * (100 - percent) / 100;
    }
}

void prices(int* price, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }
    printf("\n");
}

int main(void) {
    int price[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;

    printf("할인율(%%)을 입력하시오 : ");
    scanf("%d", &percent);

    printf("할인 전 : ");
    prices(price, 5);

    discount(price, 5, percent);

    printf("할인 후 : ");
    prices(price, 5);

    return 0;
}
