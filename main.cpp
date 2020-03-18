#include <iostream>
#include <vector>
#include <array>
#include <list>
#include "algo/Sort/Sort.cpp"

//using namespace algo;

int main(){

    std::vector<int> vec = {5,3,6,14,5};
    float arr[] = {5.0, 3.2, 12.1, 12.3, 18.0, 3.0, 12.7};
    std::list<float> arrlst(arr, arr + sizeof(arr)/sizeof(float));
    std::list<int> arrlst2 {5,1,13,7,2,9};
    algo::Sort::Insertion(arrlst);

    std::cout << std::endl;
    //std::cout << *std::min_element(vec.begin(),vec.end());

}