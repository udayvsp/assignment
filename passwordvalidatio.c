#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool containsUpperCase(const char *str) {
    while (*str) {
        if (isupper(*str)) {
            return true;
        }
        str++;
    }
    return false;
}

bool containsLowerCase(const char *str) {
    while (*str) {
        if (islower(*str)) {
            return true;
        }
        str++;
    }
    return false;
}

bool containsDigit(const char *str) {
    while (*str) {
        if (isdigit(*str)) {
            return true;
        }
        str++;
    }
    return false;
}

bool containsSymbol(const char *str) {
    while (*str) {
        if (!isalnum(*str)) {
            return true;
        }
        str++;
    }
    return false;
}

bool isPasswordValid(const char *password) {
    return containsUpperCase(password) &&
           containsLowerCase(password) &&
           containsDigit(password) &&
           containsSymbol(password);
}

int main() {
    char password[100];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isPasswordValid(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is not valid.\n");
    }

    return 0;
}
