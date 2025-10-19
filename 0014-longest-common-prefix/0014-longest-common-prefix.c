#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    static char prefix[200] = "";
    prefix[0] = '\0'; 

    for (int i = 0; i < strsSize; i++) {
        if (i + 1 < strsSize) {
            if (strs[i][0] != strs[i + 1][0]) {
                return "";
            }
        }
    }

    int size_first = strlen(strs[0]);
    int minLen = strlen(strs[0]);

    for(int k = 1; k < strsSize; k++)
    {
        if(k - 1 > 0)
        {
            if(strlen(strs[k]) < strlen(strs[k - 1]))
            {
                minLen = strlen(strs[k]);
            }
        }
    }


    for (int i = 0; i < minLen; i++) {
        if (strlen(strs[0]) == 0) return "";
        char current = strs[0][i];
        
        int count = 0;
        for (int j = 0; j < strsSize; j++) {
            if (i >= strlen(strs[j])) return prefix;
            if (current == strs[j][i])
            {
                count += 1;
            }
            if (count == strsSize) {
                prefix[i] = strs[0][i];
                prefix[i + 1] = '\0';
            }
        }
    }

    return prefix;
}