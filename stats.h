/******************************************************************************
 * Copyright (C) 2022 by Morris Blaustein
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
 * @brief header file for statistics analysis software
 *
 * <Add Extended Description Here>
 *
 * @author Morris Blaustein
 * @date 8/22/2022
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array to the console
 *
 * @param array: array to print statistics
 *
 */

void print_statistics(char * array);

/**
 * @brief Prints the contents of an array to the console
 *
 * @param array: array to print 
 *
 */

void print_array(char * array);

/**
 * @brief Finds the median of an array
 *
 * @param array: array to find median
 *
 * @return  median of input array
 */

char find_median(char * array);

/**
 * @brief Finds the mean of an array
 *
 * @param array: array to find mean
 *
 * @return  mean of input array
 */

char find_mean(char * array);

/**
 * @brief Finds the maximum of an array
 *
 * @param array: array to find maximum
 *
 * @return  maximum of input array
 */

char find_maximum(char * array);

/**
 * @brief Finds the minimum of an array
 *
 * @param array: array to find minimum
 *
 * @return  minimum of input array
 */

char find_minimum(char * array);

/**
 * @brief sorts an array from largest to smallest
 *
 * @param array: array to sort
 *
 */

void sort_array(char * array);


#endif /* __STATS_H__ */
