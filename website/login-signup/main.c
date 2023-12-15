#include <stdio.h>
#include <string.h>

int is_palindrome(char *str, int start, int end) {
    if (start >= end)
        return 1;
    else if (str[start] != str[end])
        return 0;
    else
        return is_palindrome(str, start + 1, end - 1);
}

int is_polandrom(char *str) {
    int length = strlen(str);

    if (length == 0)
        return 0;
    else if (length == 1)
        return 1;
    else
        return is_palindrome(str, 0, length - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (is_polandrom(str))
        printf("Yes, the string is a polandrom.\n");
    else
        printf("No, the string is not a polandrom.\n");

    return 0;
}