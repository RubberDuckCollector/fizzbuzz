#include <iostream>
#include <string>

int main() {

  std::string msg;

  for (int i = 1; i < 101; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
      msg = "FizzBuzz";
    } else if (i % 5 == 0) {
      msg = "Buzz";
    } else if (i % 3 == 0) {
      msg = "Fizz";
    } else {
      msg = std::to_string(i);
    }
    std::cout << i << ": " << msg << std::endl;
  }

  return 0;
}
