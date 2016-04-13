#ifndef SET_H
#define SET_H

#include <string>

#include "dynamicarray.h"

class Set
{
public:
    Set();
    ~Set();
    void insert(std::string key);
    bool is_in(std::string key);
    void remove(std::string key);
    bool is_empty();
protected:
    DynamicArray<std::string>* m_array = nullptr;
};

#endif // SET_H
