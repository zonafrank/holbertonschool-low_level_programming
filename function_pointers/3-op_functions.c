/**
 * op_add - adds two numbers
 * @a: first number to be added
 * @b: second number to be added
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return a + b;
}

/**
 * op_sub - subtracts one number from another
 * @a: the number from which the other is to be subtracted
 * @b: the number to be subtracted from the first
 * Return: the value after b is subtracted from a
 */
int op_sub(int a, int b)
{
	return a - b;
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return a * b;
}

/**
 * op_div - implements integer division of two numbers
 * @a: first number (dividend)
 * @b: second number (divisor)
 * Return: integer part of the division of a by b
 */
int op_div(int a, int b)
{
	return a / b;
}

/**
 * op_mod - carries out modulo operation of two numbers
 * @a: first number (dividend)
 * @b: second number (divisor)
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return a % b;
}
