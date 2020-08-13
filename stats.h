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
 * @file stats.h 
 * @brief small data analysis on an array of data
 *
 * 
 *
 * @author Greg Obi
 * @date August 11, 2020
 *
 */
#ifndef __STATS_H__

#define __STATS_H__

/* Add Your Declarations and Function Comments here */


/**
 * @brief Finds the mean of a data array 
 *
 * Takes test values and the size of the array and outputs the mean. 
 *
 * @param test, a list of data
 * @param size, size of array test
 *
 * @return The mean of the data
 */
float find_mean(unsigned char test[], int size);


/**
 * @brief Finds the median of an array of data
 *
 * Takes test as the array of data and size as the size of the array and ouputs the median.
 *
 * @param test, array of data
 * @param size, size of the array of data
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return the median of the array of data
 */
float find_median(unsigned char test[], int size);


/**
 * @brief Function that finds the max value in the array of data
 *
 * Takes in the array of data test and also the size of the array size and returns the max
 *
 * @param test an array of data
 * @param size size of the array of data
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return the max value
 */
float find_maximum(unsigned char test[], int size);


/**
 * @brief Finds the minimum value of the array of data
 *
 * Takes the array of data called test and returns the size of the array of data called size.
 *
 * @param <test> <array of data>
 * @param <size> <integer that is the size of the array of data>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return the minimum value
 */
float find_minimum(unsigned char test[], int size);


/**
 * @brief Prints out the statistics to the screen
 *
 * Takes in the mean, median, max, and min values of array of data and prints them to screen. 
 *
 * @param mean, the mean of an array of data
 * @param median, the median of an array of data
 * @param max, the maximum value of an array of data
 * @param min, the minimum value of an array of data
 *
 * @return nothing
 */
void print_statistics(float mean, float median, int max, int min);


/**
 * @brief prints an array of data to the screen
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param test, array of data
 * @param size, size of the array of data
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return nothing
*/
void print_array(unsigned char test[], int size);


/**
 * @brief sorts out an array of data from largest to smallest
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 *
 * @param test, array of data
 * @param size size of the array of data
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return nothing
 */
void sort_array(unsigned char test[], int size);


#endif /* __STATS_H__ */
