#include <stdlib.h>

bool isPalindrome(int x) {
    int i = 0;
    int sign = x;
    // char* str = malloc(x * sizeof(char));
    char str[12];

    if (sign < 0) {
        x = -x;
        return false;
    }

    if (x == 0) {
        return true;
    }

    while (x > 0) {
        str[i++] = x % 10 + '0';
        x /= 10;
    }

    str[i] = '\0';
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        if (str[j] != str[k]) {
            return false;
        }
    
    }

    return true;
}
