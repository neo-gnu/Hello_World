// Adding some libraries to access new features such as FUNCTIONS,  
#include <stdio.h> // Standard Library
#include <stdbool.h> // I have no idea what is, just a bool?
	
// Building my first function
int hello_world() {
	
	// Variables and datatypes, these datatypes allocates size space into the memory
	int integerX= -1, integerY = 1, integerZ = 0; // I won't use integerX, it's just my notation
	bool lamp_on = true, lamp_off = false; // True or False, this is fun because you can imagine a lamp :D
	char ch = 'c'; // I don't know why we have to use only one character
	char str[] = "GNU"; // We made a large string here different of ch that just allow use only one char
	const float gravity = 195.5; // We are using float to keep the value whitin pressision

	// This is my first hello world
	printf("Hello World\n");

	if ( lamp_on == true ) 
	{
		printf("Just a letter %c\n I love %s\n", ch, str);
		printf("Lamp turned on\n");

		if (lamp_off != lamp_on) 
		{
			printf("Lamp turned off\n");

			for ( integerY; integerY > integerZ; ++integerY)
			{
				printf("number %d!! \n", integerY);
				break;
			}

		}

	}
}


int main() {
	hello_world();
	return 0;
}
