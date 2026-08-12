#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    printf("Enter the characters:\n");

    char data[n];
    for (i = 0; i < n; i++) {
        scanf(" %c", &data[i]);
    }

    printf("\nFramed Data: ");
    printf("%d", n + 1);   // Count includes the count field

    for (i = 0; i < n; i++) {
        printf("%c", data[i]);
    }

    return 0;
}
