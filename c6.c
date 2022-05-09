// TEST-File: Zuweisungsfehler

#include <stdio.h>

main() {
  int x = 5;
  if(x = 6) {
    printf("x ist gleich 6\n");
  }
}
