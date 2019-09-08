//
//  QuickSort.c
//  SortingTypes
//
//  Created by Kalyan_s on 26/10/18.
//  Copyright © 2018 SortingTypes. All rights reserved.
//

#include "QuickSort.h"

int quickSort(int arr[],int start,int end);
void partition(int arr[],int low,int high);


void doQuickSort(int arr[],int count)
{
    printf("\n Start QuickSort...... \n");

    partition(arr,0,count-1);
    
    for (int i=0; i< count; i++)
    {
        printf("%d \n",arr[i]);
    }

    printf("\n End QuickSort...... \n");

}

void partition(int arr[],int low,int high)
{
    if (low < high)
    {
        int part= quickSort(arr,low,high);
        partition(arr,low,part-1);
        partition(arr,part+1,high);

    }
    
}

int quickSort(int arr[],int start,int end)
{
    
    int pivot = arr[end];
    int index = start-1;
    
    for (int j=start; j< end; j++)
    {
        if (arr[j] <= pivot)
        {
            index++;
            
         // swap
            int temp = arr[index];
            arr[index]=arr[j];
            arr[j] = temp;
            
        }
    }
    
    int gTemp = arr[index+1];
    arr[index+1]= arr[end];
    arr[end]=gTemp;
    
    
    
    return (index+1);
}
