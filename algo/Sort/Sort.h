#pragma once

#include "../algo.h"

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
    static void Selection(Container<T>& ctn);

    template < typename T, template <typename, typename...> class Container>
    static void Bubble(Container<T>& ctn);

    template < typename T, template <typename, typename...> class Container>
    static void Insertion(Container<T>& ctn);

    template < typename T, template <typename, typename...> class Container>
    static void Merge(Container<T>& ctn);
};

