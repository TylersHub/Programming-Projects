#include <iostream>
#include <string>
#include "censor_function.hpp"

void bleep(std::string w, std::string &t)
{
  bool b=false;
  for(int x=0;x<t.length()-w.length()+1;x++)
  {
    for(int y=0;y<w.length();y++)
    {
      if(t[x+y]==w[y])
      {
        b=true;
      }
      else if(t[x+y]!=w[y])
      {
        b=false;
        break;
      }
    }
    for(int y=0;y<w.length();y++)
    {
      if(b==true)
      {t[x+y]='*';}
    }     
   }
  }