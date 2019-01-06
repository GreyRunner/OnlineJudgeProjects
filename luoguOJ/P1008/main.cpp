#include <iostream>
#include <stdio.h>
#include <string.h>

void dfs(int over);

int numbers[100] = {0}, visit[100] = {0};
int A = 1, B = 2, C = 3;
int count = 0;

int main() {

    dfs(0);
    if (count == 0) {
        printf("No!!!\n");
    }

    return 0;
}

void dfs(int index) {
    double number1 = numbers[0] * 100 + numbers[1] * 10 + numbers[2];
    double number2 = numbers[3] * 100 + numbers[4] * 10 + numbers[5];
    double number3 = numbers[6] * 100 + numbers[7] * 10 + numbers[8];
    if (index == 9) {
        if (number1 / (double)A * (double)B == number2 && number2 / (double)B * (double)C == number3) {
            for (int i = 0; i < 9; i++) {
                printf("%d", numbers[i]);
                if ((i + 1) % 3 == 0) {
                    printf(" ");
                }
            }
            printf("\n");
            count++;
        }
    }

    for (int i = 1; i <= 9; i++) {
        if (!visit[i]) {
            numbers[index] = i;
            visit[i] = 1;
            dfs(index + 1);
            visit[i] = 0;
        }
    }
}