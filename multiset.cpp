#include "multiset.h"

#include <iostream>
#include "dynamicarray.h"

MultiSet::MultiSet()
{
    m_array = new DynamicArray<std::string>();
}

MultiSet::~MultiSet()
{
    delete m_array;
    m_array = nullptr;
}

void MultiSet::insert(std::string key)
{
    m_array->push_back(key);
}

bool MultiSet::is_in(std::string key)
{
    bool found = false;
    for (int i = 0; i < m_array->size(); ++i)
    {
        if (m_array->at(i) == key)
        {
            found = true;
        }
    }
    return found;
}

unsigned long MultiSet::count(std::string key)
{
    int result = 0;
    for (int i = 0; i < m_array->size(); ++i)
    {
        if (m_array->at(i) == key)
        {
            ++result;
        }
    }
    return result;
}

void MultiSet::removeOne(std::string key)
{
    m_array->erase(key);
}

void MultiSet::removeAll(std::string key)
{
    bool done = false;
    while (!done)
    {
        bool found = m_array->find(key) != m_array->end();
        if (!found)
        {
            done = true;
        }
        else
        {
            m_array->erase(key);
        }
    }
}

bool MultiSet::is_empty()
{
    return m_array->size() == 0;
}
