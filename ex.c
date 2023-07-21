#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool canBeConverted(int N) {
    int d;
    for (d = 1; d < N; d++)
        {
        int K = N - d * d;
        int sqrtK = sqrt(K);
        if (sqrtK * sqrtK == K)
            return true;
    }
    return false;
}

int main() {
    int N;
    printf("Enter the positive number N: ");
    scanf("%d", &N);

    if (canBeConverted(N))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
