//
//  InsertionSort.c
//  SortingTypes
//
//  Created by Kalyan_s on 26/10/18.
//  Copyright © 2018 SortingTypes. All rights reserved.
//

#include "InsertionSort.h"
void doInsertionSort(int arr[],int count)
{
    printf("\n Start InsertionSort...... \n");

    int key=0;
    for (int i=1; i< count; i++)
    {
         key = arr[i];
        int j = i-1;
        while (j >=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    for (int i=0; i< count; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    printf("\n End InsertionSort...... \n");

    
    
    
    
    
    
}
