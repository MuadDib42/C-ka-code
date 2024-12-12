#include <stdio.h>

int main() {
    int flag = 0;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("test.txt", "r");
    ptr2 = fopen("test2.txt", "r");

    if (ptr == NULL || ptr2 == NULL) {
        printf("Error opening file(s).\n");
        return 1;
    }

    char ch, ch2;
    while ((ch = fgetc(ptr)) != EOF && (ch2 = fgetc(ptr2)) != EOF) {
        if (ch != ch2) {
            flag = 1;
            break;
        }
    }

   //

    if (flag == 1) {
        printf("Files do not have the same strings\n");
    } else {
        printf("Files do have the same strings\n");
    }

    fclose(ptr);
    fclose(ptr2);

    return 0;
}
