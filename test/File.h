/*
** File.h in /home/arnhol_m/rendu/Supinfo/cpp/proj
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Thu Mar  3 19:25:16 2016 
** Last update Thu Mar  3 20:38:28 2016 
*/

#ifndef FILE_H_
#define FILE_H_

#include <string>

class	File
{
 public :
  File(char *name);
  int getCount();

 private :
  char *Finame;
};

#endif
