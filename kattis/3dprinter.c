#include <stdio.h>

int main(int argc, char** argv) {
  int n;
  scanf("%d", &n);
  int printers = 1;
  int statues = 0;
  int days = 0;

  while (statues < n) {
    if ((n - statues) > printers) {
      printers += printers;
    } else {
      statues += printers;
    }
    days++;
  }
  printf("%d\n", days);
}
