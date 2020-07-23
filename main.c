#include <stdio.h>

int main() {
    int bottom = 0;
    int lineCount = 1;

    printf("サイズを入力してください。\n");
    scanf("%d", &bottom);

    for (int II = 0; II < bottom; II++) {
        for (int iii = 0; iii < bottom; iii++) {
            for (int I = 0; I < bottom; I++) {
                for (int ii = 0; ii < 10; ii++) {
                    if (ii < 5) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
            }
            printf("\n");
            lineCount++;
        }

        for (int iii = 0; iii < bottom; iii++) {
            for (int I = 0; I < bottom; I++) {
                for (int ii = 0; ii < 10; ii++) {
                    if (ii < 5) {
                        printf(" ");
                    } else {
                        printf("*");
                    }
                }
            }
            printf("\n");
            lineCount++;
        }
    }

    return 0;
}
