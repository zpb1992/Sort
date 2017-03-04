//
// Created by zpb on 16-8-4.
//

#ifndef SORT_SORTBASE_H
#define SORT_SORTBASE_H

#include <cassert>

template<typename T>
class SortBase {
public:
    virtual void sort(T *const data, int start, int end) = 0;
    void swap(T &num1,T &num2);
};

template<typename T>
void SortBase<T>::swap(T &num1, T &num2) {
    T temp=num2;
    num2=num1;
    num1=temp;
}


#endif //SORT_SORTBASE_H
