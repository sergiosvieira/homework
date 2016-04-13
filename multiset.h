#ifndef MULTISET_H
#define MULTISET_H

#include <string>

#include "dynamicarray.h"

class MultiSet
{
public:
    MultiSet();
    ~MultiSet();
    void insert(std::string key);
    bool is_in(std::string key);
    unsigned long count(std::string key);
    void removeOne(std::string key);
    void removeAll(std::string key);
    bool is_empty();
protected:
    DynamicArray<std::string>* m_array = nullptr;
};

#endif // MULTISET_H
