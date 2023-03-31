#include <string>

/**
 * main - main function
 *
 * Return: always 0
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j;
	
	for (i = 0, j = len1 - 1; i < j; i++, j--)
	{
		char temp = n1[i];
		n1[i] = n1[j];
		n1[j] = temp;
	}
	for (i = 0, j = len2 - 1; i < j; i++, j--)
	{
		char temp = n2[i];
		n2[i] = n2[j];
		n2[j] = temp;
	}
	
	int k = 0;
	
	for (i = 0, j = 0; i < len1 || j < len2 || carry; i++, j++, k++)
	{
		int num1 = i < len1 ? n1[i] - '0' : 0;
		int num2 = j < len2 ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		if (k == size_r - 1)
		{
			return 0;
		}
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	r[k] = '\0';
	return r;
}

