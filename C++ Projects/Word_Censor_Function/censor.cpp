#include <iostream>
#include <string>
#include "censor_function.hpp"

int main(){

  system("clear");

  std::string word, text;

  std::cout << "Choose a word you'd like to censor (words are case-sensitive):\n\n";

  std::cin >> word;
  std::cin.ignore();

  std::cout << "\nNow type in a sentence using that word\n\n";

  getline(std::cin, text);

  bleep(word, text);

  std::cout << "\n" << text << "\n";

return 0;
}