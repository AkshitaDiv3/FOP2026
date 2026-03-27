#include <stdio.h>
#include <string.h>
#include <stdlib.h>

*Length of string:

int string_length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

*String reversal:

void string_reverse(char *str) {
    int l = string_length(str);
    int i;
    char temp;
    for (i = 0; i < l / 2; i++) {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
}

*Equality check of two strings:

int string_equality(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');

}

*Check palindrome:

int is_palindrome(char *str) {
    char *rev_str = (char *)malloc(string_length(str) + 1);
    strcpy(rev_str, str);
    string_reverse(rev_str);
    int result = string_equality(str, rev_str);
    free(rev_str);
    return result;
}

*Check substring: 

int is_substring(char *main_str, char *sub_str) {
    int main_len = string_length(main_str);
    int sub_len = string_length(sub_str);
    int i, j;
    for (i = 0; i <= main_len - sub_len; i++) {
        for (j = 0; j < sub_len; j++) {
            if (main_str[i + j] != sub_str[j]) {
                break;
            }
        }
        if (j == sub_len) {
            return 1; 
        }
    }
    return 0;
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Select operation:\n");
    printf("1. Calculate length\n");
    printf("2. String reversal\n");
    printf("3. Equality check (requires second string)\n");
    printf("4. Check palindrome\n");
    printf("5. Check substring (requires second string)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of string: %d\n", string_length(str1));
            break;
        case 2:
            string_reverse(str1);
            printf("Reversed string: %s\n", str1);
            break;
        case 3:
            printf("Enter the second string: ");
            scanf("%s", str2);
            if (string_equality(str1, str2)) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        case 4:
            if (is_palindrome(str1)) {
                printf("String is a palindrome.\n");
            } else {
                printf("String is not a palindrome.\n");
            }
            break;
        case 5:
            printf("Enter the second string (substring to check): ");
            scanf("%s", str2);
            if (is_substring(str1, str2)) {
                printf("Substring found.\n");
            } else {
                printf("Substring not found.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
