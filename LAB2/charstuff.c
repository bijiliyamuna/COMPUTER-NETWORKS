#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffed[200];
    int i, j = 0;

    printf("Enter the data: ");
    scanf("%s", data);

    // Start character
    stuffed[j++] = '$';

    for (i = 0; i < strlen(data); i++) {

        // If special character is $ or #
        if (data[i] == '$' || data[i] == '#') {
            stuffed[j++] = '#';   // Escape character
        }

        stuffed[j++] = data[i];
    }

    // End character
    stuffed[j++] = '$';

    stuffed[j] = '\0';

    printf("After Character Stuffing: %s\n", stuffed);

    return 0;
}
