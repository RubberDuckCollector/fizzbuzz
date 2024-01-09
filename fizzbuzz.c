#include <stdio.h>
#include <string.h>

int main() {
  for (int i = 1; i < 101; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
      printf("%d: FizzBuzz\n", i);
    } else if (i % 5 == 0) {
      printf("%d: Buzz\n", i);
    } else if (i % 3 == 0) {
      printf("%d: Fizz\n", i);
    } else {
      printf("%d: %d\n", i, i);
    }
  }
  return 0;
}
