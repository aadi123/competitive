#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(int argc, char** argv) {
  int n, X;
  scanf("%d %d\n", &n, &X);
  int items[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &items[i]);
  }
  // sort the items
  qsort(items, n, sizeof(int), cmpfunc);

  // find all sums below the target sum X
  int i = n - 1;
  while (i > 0 && ((items[i] + items[i - 1]) > X)) {
    i--;
  }
  if ((i == 0 && items[i] <= X) || (i > 0) || (n == 1)) {
     i++;
  }
  printf("%d\n", i);
}
