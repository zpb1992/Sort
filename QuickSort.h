//
// Created by zpb on 16-8-6.
//

#ifndef SORT_QUICKSORT_H
#define SORT_QUICKSORT_H

#include <assert.h>
#include "SortBase.h"

template<typename T>
class QuickSort :public SortBase<T>{
public:
    void sort(T *const data,int start,int end) override ;
};

template<typename T>
void QuickSort<T>::sort(T *const data, int start, int end) {
    assert(data!= nullptr);
    if (end <= (start + 1)) {
        return;
    }
    T temp = data[start];
    int i = start, j = end-1;
    while (i != j) {
        while (i!=j&&data[j] >= temp) {
            --j;
        }
        data[i] = data[j];
        while (i!=j&&data[i] < temp) {
            ++i;
        }
        data[j] = data[i];

    }
    assert(i==j);
    data[i] = temp;

    sort(data,start,i);
    sort(data,i+1,end);
}


#endif //SORT_QUICKSORT_H
