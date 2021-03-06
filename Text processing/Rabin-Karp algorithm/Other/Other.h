//
//  Other.h
//  Rabin-Karp algorithm
//  Random-string generation functions
//
//  Created by al1as on 22/02/17.
//  Copyright © 2017 al1as. All rights reserved.
//

#ifndef Other
#define Other

#include <string>
#include <time.h>
#include <math.h>
#include <random>

std::string generateRandomString(size_t length);
std::string generateRandomStringByPattern(std::string &pattern, std::vector<long> *positions, size_t length = 0, double probability = 0.3);
std::vector<long> getAllOccurences(std::string str, std::string sub);

#endif /* Other_h */
