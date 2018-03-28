#pragma once
#include <memory>
#include <cassert>


template <typename DataType>
class HeapArray final
{
    size_t mSize{0};
    std::unique_ptr<DataType[]> array;


public:
    HeapArray(size_t size):
        mSize(size),
        array(std::make_unique<DataType[]>(size))
    {
        assert(array);
    }

    size_t size() const {
        return mSize;
    }

    //mutator
    DataType& operator[](size_t index)
    {
        assert(array);
        return array[index];
    }

    //observator
    const DataType& operator[](size_t index) const
    {
        assert(array);
        return array[index];
    }



};


