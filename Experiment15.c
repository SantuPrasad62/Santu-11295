//15. Program for linear search
#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("Not Found");
    return 0;
}
