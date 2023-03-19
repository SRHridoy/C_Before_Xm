#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    int i;
    char temp;
    for (i = 0; i < len/2; i++) {
        temp = *(str+i);
        *(str+i) = *(str+len-i-1);
        *(str+len-i-1) = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string is: %s\n", str);
    return 0;
}
