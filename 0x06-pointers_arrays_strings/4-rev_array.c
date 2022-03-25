/**
 * reverse_array - Reverse the content of an array of integer
 * @a: array of integer
 * @n: The number of elements of the array
 *
 * Return: nothing
 **/
void reverse_array(int *a, int n)
{
	int i, tmp;



	for (i = 0; i < (n / 2); i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
