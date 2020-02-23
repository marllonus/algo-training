#pragma once

#include "../algo.h"

// why is this code working?
class algo::Sort
{
private:
    /* data */
    //Container<T> vec;

public:
    /*common f-mem*/
    Sort();
    ~Sort();

public:
    template < typename T, template <typename, typename...> class Container>
    static void Selection(Container<T>& vec);
};

