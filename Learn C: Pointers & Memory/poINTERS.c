#include<stdio.h>

int main() {
  
  // Initializing Variable
  double dblVar = 4;

  // Ptr holding the address to the variable dblVar
  // Reference operator '&' gets address of a variable. 
  /*
  
  int x = 9;
  printf("%p", &x);
  ---------------------------------

  Returns memory address of x. 
  int x = 727; // Declare variable x
  int* ptr = &x; // Declare a pointer to an int variable and assign to it the address of variable x
  printf("%p\n", &x); // Print the address of x
  printf("%p\n", ptr); // Print the address pointed to by ptr
  */
  double* dblPtr = &dblVar;

  // Printing out adress of the pointer holding hte address to the dblVar
  
  printf("%p\n" , dblPtr);

  // Print out the variable contents of the original variable based on its memory address.
  // Dereferencing allows us to use the pointer as a normal variable by using the * operator.
  // You could modify the pointer by also doing *dblPtr = 200;  
  printf("%lf\n", *dblPtr );
}
