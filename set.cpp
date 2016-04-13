#include "set.h"

#include "dynamicarray.h"

Set::Set()
{
    m_array = new DynamicArray<std::string>();
}

Set::~Set()
{
    delete m_array;
    m_array = nullptr;
}

void Set::insert(std::string key)
{
    bool found = false;
    for (int i = 0; i < m_array->size(); ++i)
    {
        if (m_array->at(i) == key)
        {
            found = true;
        }
    }
    if (!found)
    {
        m_array->push_back(key);
    }
}

bool Set::is_in(std::string key)
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

void Set::remove(std::string key)
{
    m_array->erase(key);
}

bool Set::is_empty()
{
    return m_array->size() == 0;
}
