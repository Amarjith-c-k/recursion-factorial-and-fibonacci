//fibonacci series using recursion
#include <stdio.h>
int fb(int n)
{
    if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fb(n-1) + fb(n-2) );
}
int main() {
    int c,i=0, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series\n");
    for ( c = 1 ; c <= n ; c++ )
    {
        printf("%d, ",fb(i));
        i++;
    }
    return 0;
}
