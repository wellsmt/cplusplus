#ifndef _HISTOGRAM_H_
#define _HISTOGRAM_H_

#include <map>
#include <string>

class Histogram {
    std::map<char,size_t> count;

    public:
        Histogram();
        Histogram(const std::string&);
        virtual ~ Histogram();
};

#endif