//
// Created by zpb on 16-8-5.
//

#ifndef SORT_HEAPSORT_H
#define SORT_HEAPSORT_H

#include <cassert>
#include "SortBase.h"

template<typename T>
class HeapSort :public SortBase<T>{
public:
    void sort(T *const data,int start,int end) override ;
private:
    void buildMaxHeap(T *const data,int start,int end);
    void adjustMaxHeap(T *const data,int start,int end);
    int leftIndex(int root);
    int rightIndex(int root);
};

template<typename T>
void HeapSort<T>::sort(T *const data, int start, int end) {
    assert(data!= nullptr);
    buildMaxHeap(data,start,end);
    for(int i=end-1;i>start;--i)
    {
        this->swap(data[start],data[i]);
        adjustMaxHeap(data,start,i);
    }
}

template<typename T>
void HeapSort<T>::buildMaxHeap(T *const data, int start, int end) {
    assert(data!= nullptr);
    for(int i=(start+end-2)/2;i>=start;--i)
    {
        adjustMaxHeap(data,i,end);
    }
}

// 只有第一个元素不符合
template<typename T>
void HeapSort<T>::adjustMaxHeap(T *const data, int root, int end) {
    assert(data!= nullptr);
    int leftSub=leftIndex(root);
    int rightSub=rightIndex(root);
    T max=root;
    if(leftSub<end&&data[max]<data[leftSub])
    {
        max=leftSub;
    }
    if(rightSub<end&&data[max]<data[rightSub])
    {
        max=rightSub;
    }

    if(max!=root)
    {
        this->swap(data[max],data[root]);
        adjustMaxHeap(data,max,end);
    }
}

template<typename T>
int HeapSort<T>::leftIndex(int root) {
    return 2*root+1;
}

template<typename T>
int HeapSort<T>::rightIndex(int root) {
    return 2*root+2;
}


#endif //SORT_HEAPSORT_H
