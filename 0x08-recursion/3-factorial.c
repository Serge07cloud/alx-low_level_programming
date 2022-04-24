/**
 * factorial - function name
 * @n: integer param
 * Description: Give the factorial of n
 *
 * Return: factorial of the provided number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
