#include <stdio.h>
int main() {
    int arr[11], i, val;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter value to insert at last: ");
    scanf("%d", &val);
    arr[10] = val;

    printf("Updated array:\n");
    for(i = 0; i < 11; i++) printf("%d ", arr[i]);
    return 0;
}
