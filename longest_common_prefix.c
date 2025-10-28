char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[200];
    int i, j;
    
    for (i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];

        for (j = 0; j < strsSize; j++) {
            if (strs[j][i] != c) {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = c;
    }

    prefix[i] = '\0';
    return prefix;
}
