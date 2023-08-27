#include<stdio.h>

int main() {
  
  // Initializing Variable
  double dblVar = 4;

  // Ptr holding the address to the variable dblVar
  double* dblPtr = &dblVar;

  // Printing out adress of the pointer holding hte address to the dblVar
  printf("%p\n" , dblPtr);

  // Print out the variable contents of the original variable based on its memory address. 
  printf("%lf\n", *dblPtr );
}
