#pragma once

#include "Sort.h"

algo::Sort::Sort()
{
}

algo::Sort::~Sort()
{
}

template < typename T,
            template <typename, typename...> class Container>
void algo::Sort::Selection(Container<T>& vec)
{
    try{
        //set pointer on first element
        //find minimum element in container from pointer to end
        //swap element with min value and element where set pointer
        //shift pointer
        //repeat

        /*for(auto& it: vec){

        }*/
    }
    catch(...){
        throw;
    }
}