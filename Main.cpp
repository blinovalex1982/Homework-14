#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "RU");
	int n;

	const int rows = 10;
	const int cols = 10;
	int arr[rows][cols]{};
	int sum_rows[rows]{};
	int num_rows[rows]{};
	srand(time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 100;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++) {
			sum_rows[i] += arr[i][j];
		}
	std::cout << "\nСумма по строкам!\n";
	for (int i = 0; i < rows; i++) {
		std::cout << i + 1 << "-я строка: " << sum_rows[i] << std::endl;
	}
	std::cout << "Введите номер строки от 1 до 10 -> ";
	std::cin >> n;
	std::cout << "Отсортированный массив: ";
	for (int i = 1 - 1; i > 0; i++)
		for (int j = 0; j < i; j++) 
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
			for (int i = 0; i < 1; i++)
				for (int j = 0; j < cols; j++) {
					std::cout << arr[n - 1][j] << '\t';
				}
		
	std::cout << std::endl;
	

			

			
	return 0;
}