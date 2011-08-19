/*
** RopGadget - Release v3.0
** Jonathan Salwan - http://shell-storm.org - http://twitter.com/shell_storm
** 2011-08-01
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
*/

#include "ropgadget.h"

void syntax(char *str)
{
  fprintf(stderr, "Syntax : %s <option> <binary>\n\n", str);
  fprintf(stderr, "Options: -d  Dump Hexadecimal\n");
  fprintf(stderr, "         -g  Search gadgets and make payload\n");
  fprintf(stderr, "         -v  Version\n");

  exit(EXIT_FAILURE);
}
