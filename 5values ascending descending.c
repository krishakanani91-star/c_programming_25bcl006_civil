#include <stdio.h>
void sort(int arr[], int n, int ascending) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
            }
}
int main() {
    int arr[5];
    printf("Enter 5 values:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    sort(arr, 5, 1); // ascending
    printf("Ascending: ");
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);

    sort(arr, 5, 0); // descending
    printf("\nDescending: ");
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}
