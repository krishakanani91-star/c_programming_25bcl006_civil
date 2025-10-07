#include <stdio.h>
int main() {
    int arr[10], i, val, found = 0;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter value to delete: ");
    scanf("%d", &val);

    for(i = 0; i < 10; i++) {
        if(arr[i] == val) {
            found = 1;
            for(int j = i; j < 9; j++) arr[j] = arr[j + 1];
            break;
        }
    }

    if(found) {
        printf("After deletion:\n");
        for(i = 0; i < 9; i++) printf("%d ", arr[i]);
    } else {
        printf("Value not found.\n");
    }
    return 0;
}
