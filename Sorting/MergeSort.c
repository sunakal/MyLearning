//
//  MergeSort.c
//  SortingTypes
//
//  Created by Kalyan_s on 26/10/18.
//  Copyright © 2018 SortingTypes. All rights reserved.
//

#include "MergeSort.h"

void divide(int arr[],int count);
void mergeSortedArray(int arr[],int left[],int lend,int right[],int rEnd);


void doMergeSort(int arr[], int count)
{
    
    printf("\n start MergeSort...... \n");

    divide(arr, count);
    
    for (int i=0; i< count; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    printf("\n End MergeSort...... \n");

    
}
void divide(int arr[],int count)
{
    
    if (count >1)
    {
        int mid = count/2;
        int lef[mid];
        int rig[count-mid];
        
        
        for (int i=0; i<mid; i++)
        {
            lef[i] = arr[i];
        }
        
        for (int j=mid;j<count; j++)
        {
            rig[j-mid]= arr[j];
        }
        
        divide(lef,mid);
        divide(rig,count-mid);
        mergeSortedArray(arr,lef,mid,rig,count-mid);
    }
    
}
void mergeSortedArray(int arr[],int left[],int lend,int right[],int rEnd)
{
    
    
    int i=0,j=0,k=0;
    
    
    while (i< lend && j < rEnd)
    {
        if (left[i] < right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    
    while (i < lend)
    {
        arr[k++] = left[i++];
    }
    
    while (j < rEnd)
    {
        arr[k++] = right[j++];
    }
}
