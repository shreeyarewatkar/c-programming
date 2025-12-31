#include <stdio.h>
int main() {
    int i;
    printf("Demonstrating 'continue' (skips printing 3):\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; 
        }
        printf("%d\n", i);
    }
    printf("\nDemonstrating 'break' (stops loop when i reaches 4):\n");
    for (i = 1; i <= 5; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}