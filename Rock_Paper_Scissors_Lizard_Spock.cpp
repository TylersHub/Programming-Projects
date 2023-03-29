/* Rock, Paper, Scissors, Lizard, Spock, Rules:
scissors cuts paper
paper covers rock
rock crushes lizard 
lizard poisons spock
spock smashes scissors
scissors depacitates lizard
lizard eats paper
paper disproves spock
spock vaporizes rock
rock crushes scissors */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

srand (time(NULL));

int computer = rand() % 5 + 1;

int user=0;

cout << "======================================\n";
cout << "rock paper scissors lizard spock!\n";
cout << "======================================\n";

cout << "1) ✊\n";
cout << "2) ✋\n";
cout << "3) ✌️\n";
cout << "4) 🤏\n";
cout << "5) 🖖\n\n";

cin >> user;

cout << "\nshoot! \n\n";

switch(user){
  case 1:
    switch(computer){
      case 1:
        cout << "Rock vs Rock, its a Tie!";
        break;
      case 2:
        cout << "Paper covers Rock, you lose!";
        break;
      case 3:
        cout << "Rock crushes Scissors, you win!";
        break;
      case 4:
        cout << "Rock crushes Lizard, you win!";
        break;
      case 5:
        cout << "Spock vaporizes Rock, you lose!";
        break;}
    break;
  case 2:
    switch(computer){
      case 1:
        cout << "Paper covers Rock, you win!";
        break;
      case 2:
        cout << "Paper vs Paper, its a Tie!";
        break;
      case 3:
        cout << "Scissors cuts Paper, you lose!";
        break;
      case 4:
        cout << "Lizard eats Paper, you lose!";
        break;
      case 5:
        cout << "Paper disproves Spock, you win!";
        break;}
      break;
  case 3:
    switch(computer){
      case 1:
        cout << "Rock crushes Scissors, you lose!";
        break;
      case 2:
        cout << "Scissors cuts Paper, you win!";
        break;
      case 3:
        cout << "Scissors vs Scissors, its a tie";
        break;
      case 4:
        cout << "Scissors decapitates Lizard, you win!";
        break;
      case 5:
        cout << "Spock smashes Scissors, you lose!";
        break;}
    break;
  case 4:
    switch(computer){
      case 1:
        cout << "Rock crushes Lizard, you lose!";
        break;
      case 2:
        cout << "Lizard eats Paper, you win!";
        break;
      case 3:
        cout << "Scissors decapitates Lizard, you lose";
        break;
      case 4:
        cout << "Lizard vs Lizard, its a tie!";
        break;
      case 5:
        cout << "Lizard poisons Spock, you win!";
        break;}
    break;
  case 5:
    switch(computer){
      case 1:
        cout << "Spock vaporizes Rock, you win!";
        break;
      case 2:
        cout << "Paper disproves Spock, you lose!";
        break;
      case 3:
        cout << "Spock smashes Scissors, you win";
        break;
      case 4:
        cout << "Lizard poisons Spock, you lose!";
        break;
      case 5:
        cout << "Spock vs Spock, its a tie!";
        break;}
    break;
}
}