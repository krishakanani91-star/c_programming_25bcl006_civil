#include <stdio.h>
int main() {
    int a[2][2], b[2][2], mul[2][2] = {0};
    printf("Enter first 2x2 matrix:\n");
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&a[i][j]);

    printf("Enter second 2x2 matrix:\n");
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&b[i][j]);

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                mul[i][j] += a[i][k] * b[k][j];

    printf("Product matrix:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}
