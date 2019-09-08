//
//  BubbleSort.c
//  SortingTypes
//
//  Created by Kalyan_s on 26/10/18.
//  Copyright © 2018 SortingTypes. All rights reserved.
//

#include "BubbleSort.h"
void doBubbleSort(int arr[],int count)
{
    printf("\n From Bubblesort...... \n");
    for (int i=0; i<count; i++)
    {
        for (int j=0; j<count-i-1; j++)
        {
            if (arr[j] > arr[j+1] )
            {
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    
    for (int i=0; i< count; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    printf("\n End Bubblesort...... \n");

}
