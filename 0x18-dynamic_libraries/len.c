/**
 * rand- the loop for the function in array format
 * Return: randy value
 */

int rand(void)
{
	static int i = -1;
	int randy[6] = {8, 8, 7, 9, 23, 74};

	i++;
	return (randy[i]);
}
