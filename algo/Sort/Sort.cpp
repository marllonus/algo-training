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
void algo::Sort::Selection(Container<T>& ctn)
{
    try{
        for(auto it = ctn.begin(); it != ctn.end(); ++it){

            auto min = std::min_element(it,ctn.end());
            std::swap(*min,*it);
        }
    }
    catch(...){
        throw;
    }
}

template < typename T,
            template <typename, typename...> class Container>
void algo::Sort::Bubble(Container<T>& ctn)
{
    try{

        if(ctn.end() == ctn.begin()) return;

        auto counter = 1;
        bool change_mark;
        do{
            change_mark = false;
            auto it = ctn.begin();
            auto eit = std::prev(ctn.end(), counter);

            for(; it != eit; ++it){
                auto next_it = std::next(it,1);

                if(*it > *next_it){
                    std::swap(*it,*next_it);
                    if(!change_mark) change_mark = true;
                }
            }

            ++counter;
        } while(change_mark);
    }
    catch(...){
        throw;
    }
}

template < typename T,
            template <typename, typename...> class Container>
void algo::Sort::Insertion(Container<T>& ctn){

    try{

        auto eofit = ctn.end();

        for(auto eit = ctn.begin(); eit!=eofit; ++eit)
            for(auto it =ctn.begin(); it!=eit; ++it)
                if(*eit < *it) std::swap(*eit,*it);
    }
    catch(...){
        throw;
    }
}

template < typename T,
            template <typename, typename...> class Container>
void algo::Sort::Merge(Container<T>& ctn){

}