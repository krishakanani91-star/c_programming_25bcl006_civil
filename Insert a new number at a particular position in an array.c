#include <stdio.h>
int main() {
    int arr[11], i, val, pos;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter value and position (0–10): ");
    scanf("%d %d", &val, &pos);

    for(i = 10; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;

    printf("Updated array:\n");
    for(i = 0; i < 11; i++) printf("%d ", arr[i]);
    return 0;
}
