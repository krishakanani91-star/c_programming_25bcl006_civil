#include <stdio.h>
int main() {
    int arr[10], i, val, found = 0;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &val);

    for(i = 0; i < 10; i++) {
        if(arr[i] == val) {
            printf("Value found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Value not found.\n");
    return 0;
}
