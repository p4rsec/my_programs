#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

	srand(time(0)); //seed for the pseudo-random number generator (the seed is the epoch).
	int i = rand(); //sets variable 'i' equal to the randomly generated number.

	i = i % 20; //limits the random number to 0 through 20.

	char number[20]; //sets the character array "number" to twenty.
	printf("Pick a number between 1 and 20\n");
	printf("Number: ");
	fgets(number, 20, stdin); //reads keyboard input and stores it in the array "number".
	

	if(i == number){ //if statement comparing i to the input.
	printf("That's right!\n");}	//when input is equal to 'i', it prints "That's right!" and exits.
 	else(i != number); { //says if input does not equal 'i', it does the command in the else statement.
	printf("I'm sorry, that number is incorrect. My number was %d\n", i); //otherwise, it prints "I'm sorry...." and tells you it's number.
}

	return 0; //silently exits.
}
