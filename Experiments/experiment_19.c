#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50], str3[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("\nLength of first string = %lu", strlen(str1));
    printf("\nLength of second string = %lu", strlen(str2));
    strcpy(str3, str1);
    printf("\n\nAfter copying, str3 = %s", str3);
    strcat(str3, str2);
    printf("\nAfter concatenation, str3 = %s", str3);
    if (strcmp(str1, str2) == 0) {
        printf("\n\nBoth strings are equal");
    } else {
        printf("\nBoth strings are not equal");
    }

    return 0;
}