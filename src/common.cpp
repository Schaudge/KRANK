#include "common.h"

unsigned int num_threads = 1;
std::random_device rd;
std::mt19937 gen(rd());
std::bernoulli_distribution ct(0.5);
