#include <iostream>
 
int fibonacci(int number)
{
    if (number == 0)
        return 0; // базовий випадок (умова завершення)
    if (number == 1)
        return 1; // базовий випадок (умова завершення)
    return fibonacci(number-1) + fibonacci(number-2);
}
 
// Виводимо чисела Фібоначчі
int main()
{
	std:: cout << "Enter number of fibonacci: ";
	int i;
	std:: cin >> i;
	std:: cout << "Number of fibonacci: ";
    for (int count=0; count < i; ++count)
        std:: cout << fibonacci(count) << " ";
 
    return 0;
}