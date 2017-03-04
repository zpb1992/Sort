//
// Created by zpb on 16-8-5.
//

#ifndef SORT_SELECTSORT_H
#define SORT_SELECTSORT_H

#include "SortBase.h"

template<typename T>
class SelectSort : public SortBase<T> {
public:
    void sort(T *const data,int start,int end) override ;
};

template<typename T>
void SelectSort<T>::sort(T *const data,int start,int end) {
    assert(data!= nullptr);
    for(int i=start;i<end;++i)
    {
        int min=i;
        for(int j=i;j<end;++j)
        {
            if(data[min]>data[j])
            {
                min=j;
            }
        }
        this->swap(data[min],data[i]);
    }
}


#endif //SORT_SELECTSORT_H
