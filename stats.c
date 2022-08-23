/******************************************************************************
 * Copyright (C) 2022 by Morris Blaustein 

 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief implementation file for statistics analysis software
 *
 * <Add Extended Description Here>
 *
 * @author Morris Blaustein
 * @date 08/23/22
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test);
  print_array(test);
  printf("median is: %u \n", find_median(test));
  printf("mean is: %f \n", find_mean(test));
  printf("max is: %d \n", find_maximum(test));
  printf("min is: %d \n", find_minimum(test));
}

void print_array(unsigned char * array){
  for ( int i = 0; i < SIZE; i ++){
    printf("%u ", array[i]);
  }
}

char find_median(unsigned char * array){
  sort_array(array);
  return array[SIZE/2];
}

float find_mean(unsigned char * array){
  int sum = 0;
  for ( int i = 0 ; i < SIZE ; i ++ ){
    sum+=array[i];
  }
  return (float) sum/SIZE;
}

int find_maximum(unsigned char * array){
  int max = array[0];
  for ( int i = 1; i < SIZE ; i++){
    if ( array[i] > max )
      max = array[i];
  }
  return max;
}

int find_minimum(unsigned char * array){
  int min = array[0];
  for ( int i = 1; i < SIZE ; i++){
    if ( array[i] < min )
      min = array[i];
  }
  return min;
}


void sort_array(unsigned char * array){
  unsigned char i, j, temp;
  for ( i = 0; i < SIZE; i++){
    for ( j = i+1; j < SIZE; j++){
      if ( array[i] < array[j]){
        temp = array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
}