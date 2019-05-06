#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	printf("Please enter an odd number between 2 and 10 000!: ");
	cin >> n;
	while (n % 2 == 0 || (n < 2 || n > 10000))
	{
		printf("Wrong number! Please, try again!: ");
		cin >> n;
	}
	for (int i = 0; i <= n; i++)
	{
		//Loop for the 1st "M" of the logo
		for (int k = 0; k < n * 5; k++) {
			if (((k>=n-i && k<(n*2)+i) && (k-(n-i)<n || ((n*2)+i)-k<=n)) ||
				((k<(n*4)+i && k>=(n*3)-i) && (((n * 4) + i) - k <= n || (k - ((n * 3) - i) < n)))
				)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}
		//Loop for the 2nd "M" of the logo
		for (int k = 0; k < n * 5; k++) {
			if (((k >= n - i && k < (n * 2) + i) && (k - (n - i) < n || ((n * 2) + i) - k <= n)) ||
				((k < (n * 4) + i && k >= (n * 3) - i) && (((n * 4) + i) - k <= n || (k - ((n * 3) - i) < n)))
				)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}
		cout << "\n";
	}
	return 0;
}