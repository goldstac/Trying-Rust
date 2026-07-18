#include <iostream>
int main() {
  const int x = 6;
  const int y = 7;
  std::string gpu = "rtx 5090";
  // or
  // char gpu[20] = "rtx 5090";
  std::cout << gpu << x;
}
