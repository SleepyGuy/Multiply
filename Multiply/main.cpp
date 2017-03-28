#include <string>
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> LosFactores;

	for (int i = 1; i <= 999; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			LosFactores.push_back(i);
	}


	int res = 0;
	for (int i = 0; i < LosFactores.size(); i++)
	{
		res += LosFactores[i];
	}
	std::cout << "Suma de todos los multiplos";
	std::cout << "\n";
	std::cout << res;
	std::cout << "\n";

}