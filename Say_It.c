#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        printf("%d. ABCD\n",i);
        printf("%d. EFG\n", i);
    }
    printf("PULL");
    printf("PULL");
    return 0;
}
