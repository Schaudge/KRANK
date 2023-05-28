#ifndef _COMMON_H
#define _COMMON_H

#include <algorithm>
#include <assert.h>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
#include <dirent.h>
#include <fstream>
#include <getopt.h>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <new>
#include <ostream>
#include <random>
#include <set>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <unordered_map>
#include <utility>
#include <vector>

#ifdef _OPENMP
  #include <omp.h>
#else
  #warning "OpenMP not found, multi-threading will be DISABLED and --num-threads option will be ignored!"
#endif

/* #define UINT32_MAX ((uint32_t)-1) */

uint8_t
computeHammingDistance(uint64_t x, uint64_t y); // TODO: CHECK

#endif
