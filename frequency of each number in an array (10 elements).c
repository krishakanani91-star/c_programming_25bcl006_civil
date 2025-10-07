#include <stdio.h>
int main() {
    int arr[10], freq[10] = {0}, i, j;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    for(i = 0; i < 10; i++) {
        int count = 1;
        if(freq[i] == -1) continue;
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = -1;
            }
        }
        freq[i] = count;
    }

    printf("Frequencies:\n");
    for(i = 0; i < 10; i++)
        if(freq[i] != -1)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    return 0;
}
