#include "map.h"

#include <iostream>
#include "dynamicarray.h"

Map::Map()
{
}

void Map::set(std::string key, int value)
{
    DynamicArray<std::string>::iterator it = m_keys.find(key);
    if (it == m_keys.end())
    {
        m_keys.push_back(key);
        m_values.push_back(value);
    }
}

void Map::remove(std::string key)
{
    long index = m_keys.erase(key);
    m_values.eraseAt(index);
}

int Map::get(std::string key)
{
    DynamicArray<std::string>::iterator it = m_keys.find(key);
    if (it == m_keys.end())
    {
        throw std::out_of_range("Invalid key.");
    }
    long count = std::distance(m_keys.begin(), it);
    return *(m_values.begin() + count);
}

int Map::operator[](std::string key)
{
    return get(key);
}