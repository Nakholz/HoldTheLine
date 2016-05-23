//
// main.cpp in /home/arnhol_m/rendu/Supinfo/cpp/proj
//
// Made by Arnholz Martin
// Login : arnhol_m
// 
// Started on  Thu Mar  3 19;07:24 2016 
// Last update Fri Mar  4 19:43:07 2016 
//

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "Fold.h"
#include "File.h"

using namespace std;

char    *getPath()
{
  string path;
  char   *str;

  cout << "Enter folder location: " << endl;
  cin >> path;
  str = strdup(path.c_str());
  return str;
}

int	main(int ac, char **av)
{
  char  *buff;

  cout << "Welcome in SupCount!" << endl;
  if (ac == 1)
    buff = strdup(getPath());
  else if (ac > 1)
    buff = strdup(av[1]);
  Fold SupCount(buff);
  SupCount.GetFolder();
  return 0;
}
