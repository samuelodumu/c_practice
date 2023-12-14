#include <stdio.h>

/**
 * main - tests the result of bitwise operators
 *
 * Description: The bitwise operators are '&', '|', '^', '~', '<<', and '>>'
 *
 * Return: 0
 */

int main(void) 
{
	int x = 16, y = 9;

	printf("x = %d and y = %d\n", x, y);
	printf("---------------------------\n");

	printf("x & y = %d\n", x & y);

	printf("x | y = %d\n", x | y);

	// The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on
	// every bit of two numbers. The result of XOR is 1 if the two bits are different

	printf("x ^ y = %d\n", x ^ y);

	// The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it
	printf("~x = %d\n", ~x);

	printf("~y = %d\n", ~y);

	// The left-shift and right-shift operators should not be used for negative numbers
	// and are equivalent to multiplication and division by (2^n) respectively where n is the right operand
	// Leading or trailing positions are filled with zeros
	//
	// The << (left shift) in C or C++ takes two numbers, the left shifts the bits
	// of the first operand, and the second operand decides the number of places to shift.
	
	printf("x << 1 = %d\n", x << 1); // 32
	printf("x >> 1 = %d\n", x >> 1); // 8
	
	// The >> (right shift) in C or C++ takes two numbers, right shifts the bits
	// of the first operand, and the second operand decides the number of places to shift
	
	printf("y << 1 = %d\n", y << 1); // 18
	printf("y >> 1 = %d\n", y >> 1); // 4

	// About the `& 0xFF` section: when you perform a bitwise AND with any value and 0xFF,
	// it effectively "masks" the higher-order bits and retains only the least significant 8 bits (one byte)
	// in this case `ed`

	printf("%x\n", (unsigned int)~0x12 & 0xFF);

	return 0;
}
