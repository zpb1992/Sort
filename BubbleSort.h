//
// Created by zpb on 16-8-4.
//

#ifndef SORT_BUBBLESORT_H
#define SORT_BUBBLESORT_H

#include "SortBase.h"

template<typename T>
class BubbleSort :public SortBase<T>{
public:
    void sort(T *const data,int start,int end) override ;
};

template<typename T>
void BubbleSort<T>::sort(T *const data, int start, int end) {
    assert(data!= nullptr);
    for(int i=start;i<end;++i)
    {
        for(int j=i;j>start;--j)
        {
            if(data[j]<data[j-1])
            {
                this->swap(data[j],data[j-1]);
            }
        }
    }
}


#endif //SORT_BUBBLESORT_H
