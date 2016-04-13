#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <cstring>
#include <stdexcept>
#include <memory>
#include <string>

const int _DEFAULT_DYN_ARRAY_SIZE = 4;

template <typename T>
using Iterator = T*;

template <typename T>
class DynamicArray
{
public:
    using iterator = Iterator<T>;
    DynamicArray(): array_( new T[_DEFAULT_DYN_ARRAY_SIZE] ),
                    reserved_size_( _DEFAULT_DYN_ARRAY_SIZE ),
                    size_( 0 ){ }
    DynamicArray(int n): array_( new T[n] ),
                         reserved_size_( n ),
                         size_( 0 ){ }
    ~DynamicArray()
    {
        delete[] array_;
    }
    void push_back(const T &t);
    void resize(int n);
    int size()
    {
        return size_;
    }
    T at(const int index);
    Iterator<T> begin()
    {
        return array_;
    }
    Iterator<T> end()
    {
        return array_ + size_;
    }
    Iterator<T> find(const T& t)
    {
        Iterator<T> result = begin();
        for (int i = 0; i < size_; ++i)
        {
            if (*result == t)
            {
                return result;
            }
            ++result;
        }
        return result;
    }
    void eraseAt(long index)
    {
        
    }
    long erase(const T& t)
    {
        Iterator<T> it = find(t);
        if (it != end())
        {
            long index = std::distance(begin(), it);
            shrink(size_ - 1, index);
            return index;
        }
        return -1;
    }
    void shrink(int n, long index)
    {
        if(n > 0)
        {
            T* new_array = new T[n];
            int j = 0;
            for(int i=0; i<size_; i++)
            {
                if (i != index)
                {
                    new_array[j++] = array_[i];
                }
            }
            delete[] array_;
            array_ = new_array;
            reserved_size_ = n;
        }
    }
private:
    T *array_;
    int size_;
    int reserved_size_;
};

template <typename T>
void DynamicArray<T>::push_back(const T &t)
{
    if(size_ == reserved_size_)
    {
        resize(reserved_size_ + _DEFAULT_DYN_ARRAY_SIZE);
    }
    array_[size_] = t;
    size_++;
}

template <typename T>
void DynamicArray<T>::resize(int n)
{
    if(n > reserved_size_)
    {
        T* new_array = new T[n];
        for(int i=0; i<size_; i++)
        {
            new_array[i] = array_[i];
        }
        
        delete[] array_;
        array_ = new_array;
        reserved_size_ = n;
    }
}

template <typename T>
T DynamicArray<T>::at(const int index)
{
    if (index >= 0
        && index < size_)
    {
        return array_[index];
    }
    else
    {
        throw std::out_of_range("Index out of range");
    }
}

#endif // DYNAMICARRAY_H
