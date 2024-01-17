// Задача 2. Удаление дубликатов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
#include <functional>

void print (std::set<int, std::greater<>> &set1){
	std::cout << "[OUT]:" << std::endl;
	for (const auto i : set1) {
		std::cout << i << "\n";
	}
}

int main()
{
	std::set<int, std::greater<>> set1;
	int size;

	std::cout << "[IN]:" << std::endl;
	std::cin >> size;

	for (int i = 0; i < size; i++) {
		int num = 0;
		std::cin >> num;
		set1.insert(num);
	}
	print(set1);

}
