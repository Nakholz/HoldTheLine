/*
** Fold.h in /home/arnhol_m/rendu/Supinfo/cpp/proj
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Thu Mar  3 19:12:40 2016 
** Last update Thu Mar  3 20:39:47 2016 
*/

#ifndef FOLD_H_
#define FOLD_H_

#include <string>

class	Fold
{
 public :
  Fold(char *name);
  void AffName();
  int GetFolder();
  
 private :
  char *Foname;
};

#endif
