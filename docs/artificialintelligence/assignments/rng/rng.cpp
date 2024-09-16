// add your imports here
#include <fstream>
#include <iostream>
#include <istream>
const std::string TEST_FOLDER = "\\tests\\";
unsigned int xorShift(unsigned int seed, int r1, int r2);
int main(){
  unsigned int seed, timesToRun, lowerBound, upperBound;
  std::cin >> seed >> timesToRun >> lowerBound >> upperBound;

  for (unsigned int i = timesToRun; i > 0; i--) {
    seed = xorShift(seed, lowerBound, upperBound);
  }
}
//The purpose of this function is to take the number and xor shift it to output a pseudo-random number
    unsigned int xorShift(unsigned int seed, int r1, int r2)
{
  seed ^= seed << 13;
  seed ^= seed >> 17;
  seed ^= seed << 5;

  seed *= 0xdeadbeef;
  int value = seed % (r2 - r1 + 1) + r1;
  std::cout << value << std::endl;
  return seed;
}
