#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int division(int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int intA = 20;
  int intB = 10;
  char user_input;

  int(*operations[4])(int, int) = {add, sub, mult, division};
  printf("Choose operation:");
  printf("(0 : addition | 1 : subtraction | 2 - multiply | 3 - divisionide | 4 - exit): ");

  scanf(" %c", &user_input);
  int i = user_input - '0';

  while (i != 4){
    int x = operations[i](intA, intB);
    printf("x = %d\n", x);
    break;
  }
  return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int sub(int a, int b) {printf ("subtracting 'a' and 'b\n"); return a - b;}
int mult(int a, int b) {printf ("multiplying 'a' and 'b'\n"); return a * b;}
int division(int a, int b) {printf("Dividing 'a' and 'b'\n"); return a / b;}