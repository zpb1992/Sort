//
// Created by zpb on 16-8-5.
//

#ifndef SORT_SHELLSORT_H
#define SORT_SHELLSORT_H

#include "SortBase.h"

template<typename T>
class ShellSort :public SortBase<T>{
public:
    void sort(T *const data,int start,int end);
private:

};

template<typename T>
void ShellSort<T>::sort(T *const data, int start, int end) {
    assert(data!= nullptr);
    for(int step=(end-start)/2;step>=1;step/=2)
    {
        for(int i=start;i<start+step;++i) // 起始下标
        {
            for(int j=i;j<end;j+=step)
            {
                T temp=data[j];
                /*for(int k=j-step;k>=start;k-=step)
                {
                    if(data[k]>temp)
                    {
                        data[k+step]=data[k];
                    }
                    else
                    {
                        data[k+step]=temp;
                        break;
                    }
                }*/
                int k=j;
                while(data[k-step]>temp&&k>i)
                {
                    data[k]=data[k-step];
                    k-=step;
                }
                data[k]=temp;
            }
        }
    }
}


#endif //SORT_SHELLSORT_H
