#include <stdio.h>
int main() {
  const int x = 6;
  const int y = 7;
  const char gpu[20] = "rtx 5090";
  printf("%s %d", gpu, x);
  return 0;
}
