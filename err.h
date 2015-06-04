#ifndef _ERR_H_
#define _ERR_H_

#include <stdio.h> //sprintf
#define ERROR(err, ...) ({ sprintf(err->info, ##__VA_ARGS__); return ERR; })

typedef enum
{
  ERR = 0,
  NO_ERR = 1
} ERR_EXISTS;

typedef struct
{
  char info[256];
} PixErr;

#endif
