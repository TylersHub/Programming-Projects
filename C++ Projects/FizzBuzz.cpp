#include <iostream>
using namespace std;

int main(){

  int x=0;

  for(x=1;x<101;x++){
    if(x%15==0)
    {cout << "FizzBuzz\n";}
    else if(x%3==0)
    {cout << "Fizz\n";}
    else if(x%5==0)
    {cout << "Buzz\n";}
    else
    {cout << x << "\n";}
  }
}