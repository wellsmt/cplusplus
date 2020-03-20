#include "histogram.h"

std::size_t Histogram::count(const char character){
    return _count[character];
}
