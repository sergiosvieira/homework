#ifndef MAP_H
#define MAP_H

#include <string>
#include <memory>

#include "dynamicarray.h"

class Map
{
public:
    Map();
    void set(std::string key, int value);
    void remove(std::string key);
    int get(std::string key);
    int operator[](std::string key);
protected:
    DynamicArray<std::string> m_keys;
    DynamicArray<int> m_values;
};

#endif // MAP_H
