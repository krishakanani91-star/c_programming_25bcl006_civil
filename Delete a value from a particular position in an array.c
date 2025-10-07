#include <stdio.h>
int main() {
    int arr[10], i;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("After deleting last element:\n");
    for(i = 0; i < 9; i++) printf("%d ", arr[i]);
    return 0;
}
