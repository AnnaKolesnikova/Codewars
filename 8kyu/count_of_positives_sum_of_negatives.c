#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum);
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.
  
  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.
  void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
  {
    int counter = 0;
    int sum = 0;
    int result[] = { positivesCount, negativesSum };    
    
    for(int i = 0; i < count; i++) 
    {
      if(values[i] > 0) { counter++; }
      if(values[i] < 0) { sum += values[i]; }
    }        
    *positivesCount = counter;
    *negativesSum = sum;
 
  }