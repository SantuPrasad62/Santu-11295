//19. Program using string functions (strlen, strcpy, strcat, strcmp)
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = "World";
    char s3[50];

    printf("%d\n", strlen(s1));

    strcpy(s3, s1);
    printf("%s\n", s3);

    strcat(s1, s2);
    printf("%s\n", s1);

    if (strcmp(s1, s2) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
