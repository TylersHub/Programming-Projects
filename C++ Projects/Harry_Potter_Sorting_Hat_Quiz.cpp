#include <iostream>
using namespace std;

int main(){

int gryffindor, hufflepuff, ravenclaw, slytherin;
gryffindor=hufflepuff=ravenclaw=slytherin=0;

int answer1, answer2, answer3, answer4;

int max=0;

std::string house;

cout << "\nYou have began The Sorting Hat Quiz!\n\n";

cout << "Q1) When I'm dead, I want people too remember me as:";

cout << "\n\n 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n\n";

cin >> answer1;

switch(answer1){
  case 1:
    hufflepuff++;
  break;
  case 2:
    slytherin++;
  break;
  case 3:
    ravenclaw++;
  break;
  case 4:
    gryffindor++;
  break;
  default:
    cout << "Invalid Input";
}

cout << "\nQ2) Dawn or Dusk\n\n 1) Dawn\n 2) Dusk\n\n";

cin >> answer2;

switch(answer2){
  case 1:
    gryffindor++;
    ravenclaw++;
  break;
  case 2:
    hufflepuff++;
    slytherin++;
  break;
  default:
    cout << "Invalid Input";
}

cout << "\nQ2) Which kind of instrument most pleases your ear?\n\n 1) The voilin\n 2) The trumpet\n 3) The piano\n 4) The drum\n\n";

cin >> answer3;

switch(answer3){
  case 1:
    slytherin++;
  break;
  case 2:
    hufflepuff++;
  break;
  case 3:
    ravenclaw++;
  break;
  case 4:
    gryffindor++;
  break;
  default:
    cout << "Invalid Input";
}

cout << "\nQ4) Which road tempts you most?\n\n 1) The wide, sunny grassy lane\n 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leaf-strewn path through woods\n 4) The cobbled street lined (ancient buildings)\n\n ";

cin >> answer4;

switch(answer4){
  case 1:
    hufflepuff++;
  break;
  case 2:
    slytherin++;
  break;
  case 3:
    gryffindor++;
  break;
  case 4:
    ravenclaw++;
  break;
  default:
    cout << "Invalid Input";
}

if(gryffindor>max)
{max=gryffindor;
house="Gryffindor";}
if(hufflepuff>max)
{max=hufflepuff;
house="Hufflepuff";}
if(ravenclaw>max)
{max=ravenclaw;
house="Ravenclaw";}
if(slytherin>max)
{max=slytherin;
house="Slytherin";}

cout << "\nYou will be assigned to " << house << "!\n";

}