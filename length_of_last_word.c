#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int strlength = strlen(s);
    int i = strlength - 1;
    int wordlength = 0;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        wordlength++;
        i--;
    }

    return wordlength;
}

int main() {
    char* s1 = "Hello World";
    char* s2 = "   fly me   to   the moon  ";
    char* s3 = "luffy is still joyboy";

    lengthOfLastWord(s2);
}
