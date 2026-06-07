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
 * @file stats.c 
 * @brief Statistical analysis on an array of unsigned char
 *
 * This file contains function to calculate max, min, mean and median
 * of a dataset. It allows to sort data in descending order
 * and display the results on the console
 *
 * @author Alexis Boulic
 * @date June 7, 2026
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);
}

void print_statistics(unsigned char *ptr, unsigned int size) {
  //Let's ensure the array is sorted first
  sort_array(ptr, size);

  printf("Statistics of the array:\n");
  printf("Median: %d\n", find_median(ptr, size));
  printf("Mean: %d\n", find_mean(ptr, size));
  printf("Maximum: %d\n", find_maximum(ptr, size));
  printf("Minimum: %d\n", find_minimum(ptr, size));
  printf("Sorted Array:\n");
  print_array(ptr, size);
}

void print_array(unsigned char *ptr, unsigned int size) {
  for(unsigned int i = 0; i < size; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char *ptr, unsigned int size) {
  //Require the array to be sorted first
  if(size % 2 == 0) {
    return (ptr[size/2 - 1] + ptr[size/2]) /2;
  } else {
    return ptr[size/2];
  }
  return 0;
}

unsigned char find_mean(unsigned char *ptr, unsigned int size) {
  unsigned int sum = 0;
  for(unsigned int i = 0; i < size; i++) {
    sum += ptr[i];
  }
  return (unsigned char)(sum / size);
}

unsigned char find_maximum(unsigned char *ptr, unsigned int size) {
  unsigned char max = ptr[0];
  for(unsigned int i = 1; i < size; i++) {
    if(max < ptr[i]) {
      max = ptr[i];
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size) {
  unsigned char min = ptr[0];
  for(unsigned int i = 1; i < size; i++) {
    if(min > ptr[i]) {
      min = ptr[i];
    }	
  }
  return min;
}

void sort_array(unsigned char *ptr, unsigned int size) {
  unsigned char temp;
  for(unsigned int i = 0; i < size; i++) {
    for(unsigned int j = 0; j < size; j++) {
      if(ptr[i] > ptr[j]) {
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
      }
    }
  }
}

