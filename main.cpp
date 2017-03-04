#include <iostream>
#include "InsertSort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "SelectSort.h"
#include "HeapSort.h"
#include "ShellSort.h"
#include "QuickSort.h"

int main() {
    int a[]={16,23,1,13,1,23,4,12,1,3,14,2,123,1,3,14,1,24};
    //int a[]={1,3,2,3,8};
    QuickSort<int> sort;
    sort.sort(a,0,sizeof(a)/sizeof(int));

    for(int i=0;i<sizeof(a)/sizeof(int);++i)
    {
        std::cout<<a[i]<<std::endl;
    }

    return 0;
}