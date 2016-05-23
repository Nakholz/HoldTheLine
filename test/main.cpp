//
// main.cpp in /home/arnhol_m/rendu/Supinfo/cpp/proj
// 
// Made by Arnholz Martin
// Login : arnhol_m
// 
// Started on  Thu Mar  3 19;07:24 2016 
// Last update Thu Mar  3 22:22:42 2016 
//

#include <iostream>
#include <fstream>
#include <string>
#include "Fold.h"
#include "File.h"

using namespace std;

char	*getPath()
{
  char	*path;

  cout << "please enter a valid folder in your current directory or a valid absolute path :";
  cin >> path;
  cout << path << endl;
  cout << endl;
  return path;
}

int	main(int ac, char **av)
{
  string buff;

  if (ac == 1){
    Fold test(getPath());
    test.GetFolder();
  }
  else if (ac > 1){
    Fold test(av[1]);
    test.GetFolder();
  }
  return 0;
}
