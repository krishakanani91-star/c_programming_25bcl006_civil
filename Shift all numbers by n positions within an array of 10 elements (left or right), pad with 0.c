#include <stdio.h>
void shiftArray(int arr[], int n, int dir) {
    int temp[10] = {0};
    if(dir == 0) { 
        for(int i = n; i < 10; i++) temp[i - n] = arr[i];
    } else { 
        for(int i = 9; i >= n; i--) temp[i] = arr[i - n];
    }
    for(int i = 0; i < 10; i++) arr[i] = temp[i];
}
int main() {
    int arr[10], n, dir;
    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);

    printf("Enter shift count: ");
    scanf("%d", &n);
    printf("Enter direction (0=left, 1=right): ");
    scanf("%d", &dir);

    shiftArray(arr, n, dir);
    printf("Shifted array:\n");
    for(int i = 0; i < 10; i++) printf("%d ", arr[i]);
    return 0;
}
