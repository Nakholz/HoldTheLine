//
// file.cpp in /home/arnhol_m/rendu/Supinfo/cpp/proj
// 
// Made by Arnholz Martin
// Login : arnhol_m
// 
// Started on  Thu Mar  3 19:10:41 2016 
// Last update Thu Mar  3 20:37:50 2016 
//

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <dirent.h>
#include "File.h"

using namespace std;

File::File(char *name)
{
  Finame = strdup(name);
}

int	File::getCount()
{
  string	str(Finame);
  string	tempo;
  ifstream	read(str.c_str());
  int		count = 0;

  while (getline(read, tempo))
    count ++;
  return count;
}
