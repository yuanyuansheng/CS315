#include <stdio.h>
#include <stdlib.h>

void Gen_fibo(long fibo[], long n);

int main(void) {
   long i, n, *fibo;

   printf("How many Fibonacci numbers?\n");
   scanf("%ld", &n);
   fibo = malloc(n*sizeof(long));

   Gen_fibo(fibo, n);

   printf("The first %ld Fibonacci numbers are:\n", n);
   for (i = 0; i < n; i++)
      printf("%ld ", fibo[i]);
   printf("\n");

   free(fibo);

   return 0;
}  /* main */

#ifdef ALL_C
void Gen_fibo(long fibo[], long n) {
   long i;

   fibo[0] = 0;
   fibo[1] = 1;
   for (i = 2; i < n; i++)
      fibo[i] = fibo[i-1] + fibo[i-2];
}  /* Gen_fibo */
#endif
