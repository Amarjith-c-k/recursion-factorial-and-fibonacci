//fibonacci without usng recursion
#include <stdio.h>
int fb(int n)
{
        int i,t1 = 0, t2 = 1, nextTerm;
        printf("Fibonacci Series: ");
        for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
     return 0;
}
int main() {
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fb(n);
    return 0;
}
