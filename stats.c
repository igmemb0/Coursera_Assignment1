/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Data Analysis on data set test >
 *
 * <Add Extended Description Here>
 *
 * @author Greg Obi
 * @date August 13, 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  int size = SIZE;
  sort_array(test,size);
  print_array(test,size);
  float mean = find_mean(test, size);
  float median = find_median(test,size);
  float max =  find_maximum(test,size);
  float min = find_minimum(test,size);
  print_statistics(mean,median,max,min);

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}


/* Add other Implementation File Code Here */
float find_mean(unsigned char test[], int size)
{
  int sum = 0;
  float mean = 0;
  
  for(int i = 0; i <= SIZE; i++)
  {
      sum = sum + test[i];
  }
  return (mean = sum/SIZE);
}

void sort_array(unsigned char test[], int size)
{
  int temp = 0; // short for temporary

  for(int i = 0; i < SIZE; i++) // starts from first element
    {
      for(int j = i + 1; j < SIZE; j++) // starts from second element
	{
	  if (test[i] < test[j]) // checks if the first element is less than the next element.
	    {
	      temp = test[i]; // assign value of ith element to temp
	      test[i] = test[j]; // assign value of jth element to i
	      test[j] = temp; // assign value of temp to test j
	    }
	}
    }
  
}

float find_median(unsigned char test[], int size)
{
  
  float median = 0;
  
  median = (test[(size-1)/2] + test[size/2])/2.0; /* We know that the array is even so I don't need other logic */

  return median;

}

float find_maximum(unsigned char test[], int size)
{
 float maximum = test[0];
 for( int i = 0; i < SIZE; i++)
    {
      if(test[i] > maximum)
	{
	  maximum = test[i];
	  i++; // this makes it so the for loop starts again but at a value farther ahead
	     // to start comparing again
	}
    }
 return maximum;

}
float find_minimum(unsigned char test[], int size)
{
  float minimum = test[0];
  for( int i = 1; i < SIZE; i++)
    {
      if(test[i] < minimum)
        {
          minimum = test[i];
	  i++; // this makes it so the for loop starts again but at a value farther ahead
	      // to start comparing again. 
	}
    }
  return minimum;

}
void print_statistics(float mean, float median, float max, float min)
{
  printf("\n\nThe following are the value of mean, median, maximum and minimum for the given\n unsigned  char array 'test'\n\n");
  printf("The value of mean is = %.2f \n\n",mean);
  printf("The value of median is = %.2f \n\n",median);
  printf("The maximum value is = %.2f \n\n",max);
  printf("The minimum value is = %.2f \n\n",min); 
}
void print_array(unsigned char test[], int size)
{
  printf("\nThe array after sorting is..\n");
  for(int i = 0; i < SIZE; i++)
    {
      printf("The element %d  in the array 'test' is %d\n\n",i,test[i]);
    }
}








