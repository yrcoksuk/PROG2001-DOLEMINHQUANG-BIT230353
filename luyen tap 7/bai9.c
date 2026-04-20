#include <stdio.h>
#include <string.h>

int main() {
    char s[100], ch;
    int count = 0;
    printf("Nhap chuoi: "); gets(s);
    printf("Nhap ky tu can tim: "); scanf("%c", &ch);

    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ch) count++;
    }
    printf("Ky tu '%c' xuat hien %d lan.\n", ch, count);
    return 0;
}