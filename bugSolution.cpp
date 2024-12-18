#include <iostream>
#include <vector>

int main() {
  // Instead of std::vector<bool>, use std::vector<uint8_t>
  std::vector<uint8_t> boolVector;
  boolVector.push_back(1); // true
  boolVector.push_back(0); // false
  
  for (uint8_t value : boolVector) {
    std::cout << static_cast<bool>(value) << " ";
  }
  std::cout << std::endl;
  return 0;
}
