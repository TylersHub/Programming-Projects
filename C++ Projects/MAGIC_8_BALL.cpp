#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

int main(){

int eight_ball=0;

string question;

std::cout << "Ask the Magic 8 Ball a Question\n\n ";

std::cin >> question;

srand(time(0));
eight_ball=1+(rand()%20);


switch (eight_ball) {
  case 1:
    cout << "\nIt is certain.";
    break;
  case 2:
    std::cout << "\nIt is decidedly so.";
    break;
  case 3:
    cout << "\nWithout a doubt.";
    break;
  case 4:
    cout << "\nYes - definitely.";
    break;
  case 5:
    cout << "\nYou may rely on it.";
    break;
  case 6:
    cout << "\nAs I see it, yes.";
    break;
  case 7:
    cout << "\nMost likely.";
    break;
  case 8:
    cout << "\nOutlook good.";
    break;
  case 9:
    cout << "\nYes.";
    break;
  case 10:
    cout << "\nSigns point to yes.";
    break;
  case 11:
    cout << "\nReply hazy, try again.";
    break;
  case 12:
    cout << "\nAsk again later.";
    break;
  case 13:
    cout << "\nBetter not tell you now.";
    break;
  case 14:
    cout << "\nCannot predict now.";
    break;
  case 15:
    cout << "\nConcentrate and ask again.";
    break;
  case 16:
    cout << "\nDon't count on it.";
    break;
  case 17:
    cout << "\nMy reply is no.";
    break;
  case 18:
    cout << "\nMy sources say no.";
    break;
  case 19:
    cout << "\nOutlook not so good.";
    break;
  case 20:
    cout << "\nVery doubtful.";
    break;
}
}