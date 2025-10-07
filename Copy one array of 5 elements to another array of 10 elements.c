#include <stdio.h>
int main() {
    int src[5], dest[10] = {0};
    printf("Enter 5 values:\n");
    for(int i=0;i<5;i++) scanf("%d",&src[i]);

    for(int i=0;i<5;i++) dest[i*2] = src[i];

    printf("Copied array:\n");
    for(int i=0;i<10;i++) printf("%d ", dest[i]);
    return 0;
}
