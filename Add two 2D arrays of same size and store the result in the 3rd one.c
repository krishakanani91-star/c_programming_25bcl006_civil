#include <stdio.h>
int main() {
    int a[2][2], b[2][2], sum[2][2];
    printf("Enter first 2x2 matrix:\n");
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&a[i][j]);

    printf("Enter second 2x2 matrix:\n");
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&b[i][j]);

    for(int i=0;i<2;i++) for(int j=0;j<2;j++) sum[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
