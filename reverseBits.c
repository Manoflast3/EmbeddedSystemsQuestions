/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

// Code here

A[64]

void reversebits(long x) {
    int bitmask = 0xFFFF;
    int wordSize = 16; 
    return A[bitmask & (x>>(3*wordSize))] << (3*wordSize) + 
           A[bitmask & (x>>(2*wordSize))] << (2*wordSize) +
           A[bitmask & (x>>(wordSize))] << (wordSize) + 
           A[bitmask & x];
}



int main() {
    // for testing

    return 0; 
}
