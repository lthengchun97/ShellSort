#include "shell.h"

void shellSort(int *arrInt,int arrSize)
{
  int temp,gap,i,j;

  for (gap = arrSize/2; gap > 0; gap /= 2)
  {
    temp = arrInt[i];
    for(j = i ; j >= gap && arrInt [j- gap]> temp ; j -= gap)
    {
      arrInt[j]=arrInt[j-gap];
    }
    arrInt[j]=temp;
  }
}
