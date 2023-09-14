#include <stdio.h>

int main() {
    int num, i;

    printf("Enter the number for which you want to display the multiplication table: ");
    scanf("%d", &num);

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}