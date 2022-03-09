#pragma hdrstop
#pragma argsused

#include <iostream>
#include <algorithm>


	/*
		07/02/2022
		Gerasimenko Dmitrii Aleksandrovich
		dbfone@mail.ru
		+7(911)-66-0-66-96

	*/


typedef struct part
{
		unsigned long int size;
		unsigned long int count;
};


int main(int argc, _TCHAR* argv[])
{
	unsigned long int N=88888;
	unsigned long int k=55555;
	unsigned long int result;
	unsigned long int temp;
	//
	part _fragment[2];

	//
	std::cout << "Input array size N: ";
	std::cin >> N;
	std::cout << "Input array size k: ";
	std::cin >> k;

	// Обработка правильности ввода исходных данных
	//
	if (N <= 1) {
		std::cout << "Error: array 'N' cannot be less than or equal to one" << std::endl;
		system("pause");

		return 0;
	}
	//
	if (k <= 1) {
		std::cout << "Error: array 'k' cannot be less than or equal to one" << std::endl;
		system("pause");

		return 0;
	}
	//
	if (k > N) {
		std::cout << "Error: array 'k' cannot be larger than array 'N'" << std::endl;
		system("pause");

		return 0;
	}

	//
	_fragment[0].size = int(N / k);
	std::cout << "_fragment[0].size = " << N << " / " << k << " = " << _fragment[0].size << std::endl;
	//
	temp = k * _fragment[0].size;
	 std::cout << "temp = " << k << " * " << _fragment[0].size << " = " << temp << std::endl;
	//
	_fragment[1].count = N - temp;
	std::cout << "_fragment[1].count = " << N << " - " << temp << " = " << _fragment[1].count << std::endl;
	//
	_fragment[0].count = k - _fragment[1].count;
	std::cout << "_fragment[0].count = " << k << " - " << _fragment[1].count << " = " << _fragment[0].count << std::endl;

	//
	//
	// Проверка вычислений
	//

	_fragment[1].size = _fragment[0].size + 1;
	//
	//
	//
	result = (_fragment[0].size * _fragment[0].count) + (_fragment[1].size * _fragment[1].count);
	//
	std::cout << "------------------------------------------------------------------" << std::endl;
	//
	std::cout << _fragment[0].size << " * " << _fragment[0].count;
	//
	if (_fragment[1].count != 0)
	{
	std::cout << " + ";
	std::cout << _fragment[1].size << " * " << _fragment[1].count;
	}
	//
	std::cout << " = ";
	std::cout << result << std::endl;

	//
	std::cout << "------------------------------------------------------------------" << std::endl;
	//
	if (result == N)
	{
		std::cout << "OK! Calculations are correct." << std::endl;
		//
		//std::cout << "Minimum block size = " << std::min({_fragment[0].size, _fragment[1].size}) << std::endl;
		//
		//std::cout << "Maximum block size = " << std::max({_fragment[0].size, _fragment[1].size}) << std::endl;
	}
	else
		std::cout << "ERROR! Сalculations are wrong." << std::endl;

	//
	std::cout << "------------------------------------------------------------------" << std::endl;
	//

	system("pause");
	return 0;
}




