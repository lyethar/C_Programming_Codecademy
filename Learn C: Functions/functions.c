#include <stdio.h>
#include <stdlib.h>

/*
If a function isn’t going to return any value, void is used as the return type. void indicates to the compiler that the function returns no data and should not expect to see the return keyword. Any of the types covered in previous lessons, int, char, boolean, etc, can be used as the return type of a function.

Similarly, if a function has no parameters void should be in place of any parameters. The parameters listed inside the parenthesis are like variable declarations. Each parameter should start with the type and then the name of the parameter.

https://www.geeksforgeeks.org/return-0-vs-return-1-in-c/

int getSecretNumber() {
  int secretNumber = 7;
  return secretNumber;  
}

*/

int main(void) {
  int absValue = abs(-5);
  printf("%d\n", absValue);
}
