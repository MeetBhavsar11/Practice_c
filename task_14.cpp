#include <stdio.h>
int main() {
    char a;
    printf("Enter Alphabet: ");
    scanf("%c", &a);

    
    if  (a=='a'||a=='e'||a=='i'||a=='o'||a=='u') {
        printf("%c is Vowel.",a);
    }
    else {
        printf("%c is Consonent.",a);
    }

    return 0;
}
