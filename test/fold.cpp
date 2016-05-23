//
// fold.cpp in /home/arnhol_m/rendu/Supinfo/cpp/proj
// 
// Made by Arnholz Martin
// Login : arnhol_m
// 
// Started on  Thu Mar  3 19:19:01 2016 
// Last update Thu Mar  3 21:40:07 2016 
//

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <dirent.h>
#include "Fold.h"
#include "File.h"

using namespace std;

Fold::Fold(char *name)
{
  Foname = strdup(name);
}

int	getExt(char *str)
{
  if (strstr(str, ".html"))
    return 1;
  if (strstr(str, ".css"))
    return 1;
  if (strstr(str, ".java"))
    return 1;
  if (strstr(str, ".css"))
    return 1;
  if (strstr(str, ".php"))
    return 1;
  if (strstr(str, ".c"))
    return 1;
  if (strstr(str, ".cpp"))
    return 1;
  else 
    return (0);
}

int	Fold::GetFolder()
{
  DIR	*rep = opendir(Foname);
  int	sum = 0;

  if (rep != NULL){
    struct dirent *ent;

    while ((ent = readdir(rep)) != NULL)
      {
	cout << "file " << ent->d_name << " ";
	File buff(ent->d_name);
	if (getExt(ent->d_name) == 1)
	  sum += buff.getCount();
	cout << "new value : " << sum << endl;
      }
    closedir(rep);
  }
  return sum;
}
