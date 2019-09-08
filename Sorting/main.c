//
//  main.c
//  SortingTypes
//
//  Created by Kalyan_s on 26/10/18.
//  Copyright © 2018 SortingTypes. All rights reserved.
//

#include <stdio.h>
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int arra[] ={91,3,2,19,23,67,34,7};
    int length = sizeof(arra)/sizeof(arra[0]);
    
    doBubbleSort(arra, length);
    int arra1[] ={23,67,34,91,3,2,19,7};
    int length1 = sizeof(arra)/sizeof(arra[0]);

    doMergeSort(arra1, length1);
   
    int arra2[] ={2,19,23,91,3,67,34,7};
    int length2 = sizeof(arra)/sizeof(arra[0]);

    doQuickSort(arra2, length2);
    
    int arra3[] ={67,34,791,3,2,19,23};
    int length3 = sizeof(arra)/sizeof(arra[0]);
    doInsertionSort(arra3,length3);
    
    return 0;
}
