#include <iostream>
#include <vector>
#include <string>

int main(){

  // Whale, whale, whale.
  // What have we got here?

  std::string inuser;

  std::cout << "\nEnter a few words you'd like to speak in Whale Language\n\n";

  getline (std::cin, inuser);

  std::vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  std::vector<char>result;

  for(int x=0;x<inuser.size();x++)
  {
    for(int y=0;y<vowels.size();y++)
    {
      if(inuser[x]==vowels[y])
      {
        result.push_back(vowels[y]);
        if(inuser[x]=='e' || inuser[x]=='u')
        {
          result.push_back(vowels[y]);
        }  
      }
    }
  }

  std::cout << "\n\nIn Whale Language that is:\n\n";

  for(int z=0;z<result.size();z++)
  {
    std::cout << result[z];
  }

  std::cout << "\n\nNow you can speak whale!\n\n";

  return 0;
}