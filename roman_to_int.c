#include <string.h>

typedef enum ERomanNumber {
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000
} RomanNumber;

// loop over the string
// check if I comes before V or X / X before L or C / C before D or M
int romanToInt(char* s) {
    int num = 0;
    RomanNumber roman_number;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'I') {
            roman_number = I;        
            if (s[i + 1] == 'V' || s[i + 1] == 'X') {
                num = num - I;
            } else {
                num = num + roman_number;
            }
        }

        if (s[i] == 'V') {
            roman_number = V;        
            num = num + roman_number;
        }

        if (s[i] == 'X') {
            roman_number = X;        
            if (s[i + 1] == 'L' || s[i + 1] == 'C') {
                num = num - roman_number;
            } else {
                num = num + roman_number;
            }
        }

        if (s[i] == 'L') {
            roman_number = L;        
            num = num + roman_number;
        }

        if (s[i] == 'C') {
            roman_number = C;        
            if (s[i + 1] == 'D' || s[i + 1] == 'M') {
                num = num - roman_number;
            } else {
                num = num + roman_number;
            }
        }

        if (s[i] == 'D') {
            roman_number = D;        
            num = num + roman_number;
        }
        if (s[i] == 'M') {
            roman_number = M;        
            num = num + roman_number;
        }

    }
    return num;
    
    
}
