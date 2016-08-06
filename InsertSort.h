//
// Created by zpb on 16-8-4.
//

#ifndef SORT_INSERTSORT_H
#define SORT_INSERTSORT_H

#include "SortBase.h"

template<typename T>
class InsertSort:public SortBase<T> {
public:
    void sort(T *const data,int start,int end) override ;

};

template<typename T>
void InsertSort<T>::sort(T *const data, int start, int end) {
    assert(data!= nullptr);
    for(int i=start;i<end;++i)
    {
        int temp=data[i];
        /*for(int j=i-1;j>=start;--j)
        {
            if(temp<=data[j])
            {
                data[j+1]=data[j];
            }
            else
            {
                data[j+1]=temp;
                break;
            }
        }*/
        int j=i;
        while(data[j-1]>temp&&j>start)
        {
            data[j]=data[j-1];
            --j;
        }
        data[j]=temp;

    }
}


#endif //SORT_INSERTSORT_H
