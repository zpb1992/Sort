//
// Created by zpb on 16-8-4.
//

#ifndef SORT_MERGESORT_H
#define SORT_MERGESORT_H

#include "SortBase.h"

template<typename T>
class MergeSort :public SortBase<T>{
public:
    void sort(T *const data,int start,int end) override ;
    void merge(T *const data,int start1,int start2,int end);
};

template<typename T>
void MergeSort<T>::sort(T * const data, int start, int end) {
    assert(data!= nullptr);
    if ((end - start) > 1)
    {
        int mid=(end+start)/2;
        sort(data,start,mid);
        sort(data,mid,end);
        merge(data,start,mid,end);
    }
    return;

}

template<typename T>
void MergeSort<T>::merge(T *const data,int start1,int start2,int end) {
    assert(data!= nullptr);
    int n1=start2-start1;
    int n2=end-start2;

    T *left=new T[n1];
    T *right=new T[n2];
    for(int i=start1;i<start2;++i)
        left[i-start1]=data[i];
    for(int j=start2;j<end;++j)
        right[j-start2]=data[j];

    int i=0,j=0;
    int n=start1;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            data[n++] = left[i++];
        else
            data[n++] = right[j++];
    }

    for(;i<n1;++i)
        data[n++]=left[i];
    for(;j<n2;++j)
        data[n++]=right[j];

}


#endif //SORT_MERGESORT_H
