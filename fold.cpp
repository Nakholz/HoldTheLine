//
// fold.cpp in /home/arnhol_m/rendu/Supinfo/cpp/proj
// 
// Made by Arnholz Martin
// Login : arnhol_m
// 
// Started on  Thu Mar  3 19:19:01 2016 
// Last update Fri Mar  4 19:41:17 2016 
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
  int	ret = 0;

  strstr(str, ".html")?(ret = 1):ret = 0;
  strstr(str, ".css")?(ret = 1):ret = 0;
  strstr(str, ".java")?(ret = 1):ret = 0;
  strstr(str, ".php")?(ret = 1):ret = 0 ;
  strstr(str, ".c")?(ret = 1):ret = 0;
  strstr(str, ".cpp")?(ret = 1):ret = 0;
  return (ret);
}

int	Fold::GetFolder()
{
  DIR	*fold = opendir(Foname);
  int	sum = 0;

  if (fold != NULL){
    struct dirent *file;
    while ((file = readdir(fold)) != NULL){
	cout << "file " << file->d_name << " ";
	File buff(file->d_name);
	if (getExt(file->d_name) == 1)
	  sum += buff.getCount();
	cout << "new value : " << sum << endl;
      }
    closedir(fold);
  }
  return sum;
}
