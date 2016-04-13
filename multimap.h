#ifndef MULTIMAP_H
#define MULTIMAP_H

#include <string>

class Multimap
{
public:
    Multimap();
    void set(std::string key, int value);
    void removeAll(std::string key);
    int count(std::string key);
    int* getAll(std::string key);
};

#endif // MULTIMAP_H
