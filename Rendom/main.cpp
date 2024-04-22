//Random
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{
		system("CLS");  //Функция system()позволяет вызвать любую команду командной строки (консоли)
		//Коман "CLS" (Clear Screen) - очишает окно консоли
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)
		{
			std::cerr << "Error: введены некоректное значуния" << endl;
			system("PAUSE");   //Команда "PAUSE" приостанавливает выполнение программы дщ нажатия любой клавиши   
		} while (minRand > maxRand);
		//заполнение массива случайными числами:	
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;  //Функция rand() возвращает псевдослучайное число в диапазоне от 0 до32 767(RAND_MAX)
		}

		//вывод массива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;

		//сортировка массива на экран:
		for (int i = 0; i < n; i++)//счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение 
		{
			for (int j = i + 1; j < n; j++)// счетчик 'j' перебирает оставшися элементы
			{
				//arr[i] - выбранный элемент массива 
				//arr[j] - перебираемый элемент
				if (arr[j] < arr[j])
				{
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}

		//вывод отсортированного массива на экран:
		for (int i = 0; i > n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}