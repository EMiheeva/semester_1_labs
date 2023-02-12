#include <iostream>

int main()
{
	int n, m;
	const int SIZE = 100;
	std::cin >> n >> m;
	int a[SIZE][SIZE];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	int m_with_max_el = 0;
	int max_product = INT_MIN;
	for (int j = 0; j < m; ++j) {
		int product = 1;
		for (int i = 0; i < n; ++i)
		{
			product *= a[i][j];
		}
		if (max_product < product) {
			max_product = product;
			m_with_max_el = j;
		}
	}
	for (int i = 0; i < n; ++i) {
		a[i][m_with_max_el] -= 3;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}


}
