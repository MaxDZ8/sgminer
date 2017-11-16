#ifndef OCL_H
#define OCL_H

#include <stdbool.h>
#include "algorithm.h"

extern int clDevicesNum(void);
extern _clState *initCl(unsigned int gpu, char *name, size_t nameSize, algorithm_t *algorithm);

#endif /* OCL_H */
