#include <stdio.h>

int main(int value_1, int value_2, int value_3)
{


      printf("This is a program that solves a Quadratic Equation!\n");
      printf("Please input your values.\n");

      printf("Value 1: ");
      fgets(value_1, 8, stdin);

      printf("Value 2: ");
      fgets(value_2, 8, stdin);     //returns SIGSEV either in these functions or in the integers themselve. Research.

      printf("Value 3: ");
      fgets(value_3, 8, stdin);



      printf("Here are your values: %d, %d, %d\n",value_1, value_2, value_3);

return 0;
}
