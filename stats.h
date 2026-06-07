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
 * @brief Header file for statistical analysis function.
 *
 * This file contains the declaration of the functions for 
 * the statistical analysis.
 *
 * @author Alexis Boulic
 * @date June 7, 2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print the statistics of an array.
 *
 * It includes minimum, maximum, median and mean.
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 */
void print_statistics(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, 
 * prints the array to the screen
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 */
void print_array(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, 
 * returns the median value
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 *
 * @return The median value of an array
 */
unsigned char find_median(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, 
 * returns the mean
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 *
 * @return The mean value of an array
 */
unsigned char find_mean(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, 
 * returns the maximum
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 * 
 * @return The maximum value of an array
 **/
unsigned char find_maximum(unsigned char *ptr, unsigned int size);

/**
 * @brief Given an array of data and a length, 
 * returns the minimum
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 *
 * @return The minimum value of an array
 **/
unsigned char find_minimum(unsigned char *ptr, unsigned int size);

/*
 * @brief Given an array of data and a length, 
 * sorts the array from largest to smallest.  
 * (The zeroth Element should be the largest value, 
 * and the last element (n-1) should be the smallest value.)
 *
 * @param ptr Pointer to an n-element data array
 * @param size Number of elements in the array
 */
void sort_array(unsigned char *ptr, unsigned int size);

#endif /* __STATS_H__ */
