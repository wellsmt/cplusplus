#ifndef _HISTOGRAM_H_
#define _HISTOGRAM_H_

#include <map>
#include <string>

class Histogram {
    std::map<char,size_t> _count;
    
    public:
        Histogram(){};
        Histogram(const std::string& text){
            for(char c : text){
                if(_count.find(c) == _count.end()){
                    _count[c] = 1;
                } else {
                    _count[c]++;
                }
            }
        };
        virtual ~Histogram(){};

        std::size_t count(const char c);
};

#endif