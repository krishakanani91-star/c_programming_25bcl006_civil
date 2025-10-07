#include <stdio.h>
int main() {
    int arr[11], i, val;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter value to insert at beginning: ");
    scanf("%d", &val);

    for(i = 10; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = val;

    printf("Updated array:\n");
    for(i = 0; i < 11; i++) printf("%d ", arr[i]);
    return 0;
}
