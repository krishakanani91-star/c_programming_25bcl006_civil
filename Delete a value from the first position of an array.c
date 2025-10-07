#include <stdio.h>
int main() {
    int arr[10], i, pos;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete (0–9): ");
    scanf("%d", &pos);

    for(i = pos; i < 9; i++) arr[i] = arr[i + 1];

    printf("After deletion:\n");
    for(i = 0; i < 9; i++) printf("%d ", arr[i]);
    return 0;
}
