#include <iostream>

// Task 1
//int main()
//{
//
//    unsigned int apples, pears, bananas;
// 
//    std::cout << "Hello, C++\n";
//
//    std::cout << "Apples: ";
//    std::cin >> apples;
//
//    std::cout << "Pears: ";
//    std::cin >> pears;
//
//    std::cout << "Bananas: ";
//    std::cin >> bananas;
//
//    std::cout << "Don't forget to buy " << apples << " apples, " 
//              << pears << " pears and " << bananas << " bananas!";
//
//}

// Task 2
//int main()
//{
//	double width, height, Perimeter, Area;
//
//	std::cout << "Enter width: ";
//	std::cin >> width;
//	std::cout << "Enter height: ";
//	std::cin >> height;
//	
//	Perimeter = 2 * (width + height);
//	Area = width * height;
//
//	std::cout << "Perimeter = " << Perimeter << std::endl;
//	std::cout << "Area = " << Area << std::endl;
//}

// Task 3
//int main()
//{
//	const double dollarRate = 1.1;
//	const double yenRate = 145;
//	double euro;
//
//	std::cout << "Euro: ";
//	std::cin >> euro;
//
//	double dollarAmount = euro * 1.1;
//	double yenAmount = euro * 145;
//
//	std::cout << "dollars = " << dollarAmount << std::endl;
//	std::cout << "yen = " << yenAmount << std::endl;
//}

// Task 4
//int main()
//{
//	unsigned int a, b;
//	std::cout << "a: ";
//	std::cin >> a;
//	std::cout << "b: ";
//	std::cin >> b;
//
//	bool expr = a % b == 0;
//
//	std::cout << std::boolalpha << expr;
//
//}

// Task 5
//int main()
//{
//	unsigned int a, b, c;
//	std::cout << "a: ";
//	std::cin >> a;
//	std::cout << "b: ";
//	std::cin >> b;
//	std::cout << "c: ";
//	std::cin >> c;
// 
//  unsigned int num = a*100 + b*10 + c;
//
//	std::cout << num;
//
//}

// Task 6
//int main()
//{
//	unsigned int number;
//
//	std::cout << "Enter a 3 digit number: ";
//	std::cin >> number;
//
//	int units, tens, hundreds, sum;
//
//	hundreds = number / 100;
//	tens = number / 10 - 10 * hundreds;
//	units = number - 100 * hundreds - 10 * tens;
//	sum = hundreds + tens + units;
//
//	std::cout << "units = " << units << std::endl;
//	std::cout << "tens = " << tens << std::endl;
//	std::cout << "hundreds = " << hundreds << std::endl;
//	std::cout << "sum = " << sum;
//}

// Task 7
//int main()
//{
//	unsigned int a, b;
//	std::cout << "Enter a 2 digit number: ";
//	std::cin >> a;
//	std::cout << "Enter a secon 2 digit number: ";
//	std::cin >> b;
//
//	int product = a * b;
//	int lastDigit = product % 10;
//	bool isOdd = lastDigit % 2;
//
//	std::cout << "Prod: " << product << std::endl;
//	std::cout << "Last digit: " << lastDigit << std::endl;
//	std::cout << "Is odd: " << std::boolalpha <<isOdd << std::endl;
//
//}

// Task 8
//#include <iomanip>
//int main()
//{
//	unsigned int code;
//	std::cout << "Enter an 8-digit code: ";
//	std::cin >> code;
//
//	int lastDigits = code % 1000;
//
//	std::cout << "*****" << std::setfill('0') << std::setw(3) << lastDigits;
//}

// Task 9
//int main()
//{
//	unsigned int secondsNum;
//	std::cout << "Enter an amount of seconds: ";
//	std::cin >> secondsNum;
//
//	unsigned int dateSeconds = secondsNum % 60;
//	unsigned int dateMinutes = (secondsNum / 60) % 60;
//	unsigned int dateHours = (secondsNum / 3600) % 24;
//	unsigned int dateDays = secondsNum / 86400;
//
//	std::cout << dateDays << " days, " 
//			  << dateHours << " hours, " 
//			  << dateMinutes << " minutes, " 
//		      << dateSeconds << " seconds";
//
//}

// Task 10
//int main()
//{
//	int a, b, c, d;
//	std::cout << "a: ";
//	std::cin >> a;
//	std::cout << "b: ";
//	std::cin >> b;
//	std::cout << "c: ";
//	std::cin >> c;
//	std::cout << "d: ";
//	std::cin >> d;
//
//	bool expr = !((a < c && a < d) && (b < c && b < d)) && !((a > c && a > d) && (b > c && b > d));
//
//	std::cout << std::boolalpha << expr;
//
//}

// Bonus Task 1
//int main()
//{
//	unsigned int a;
//	std::cout << "Enter a 4-digit number: ";
//	std::cin >> a;
//	bool conditionOne = a % 10 == a / 1000;
//	bool conditionTwo = (a / 100) % 10 == (a / 10) % 10;
//	bool expr = conditionOne && conditionTwo;
//	std::cout << std::boolalpha << expr;
//}

// Bonus Task 2
//int main()
//{
//	int a;
//	std::cout << "a: ";
//	std::cin >> a;
//	
//	int aAbsValue = a * (1 - 2 *(a < 0));
//
//	std::cout << aAbsValue;
//	
//}

//Bonus Task 3
//int main()
//{
//	int a, b;
//	std::cout << "a: ";
//	std::cin >> a;
//	std::cout << "b: ";
//	std::cin >> b;
//
//	int biggerNum = (a < b) * b + (a >= b) * a;
//
//	std::cout << biggerNum;
//}

//Bonus Task 4
//int main()
//{
//	double distance;
//	std::cout << "Enter the distance in kilometers: ";
//	std::cin >> distance;
//
//	double tariff = 3 + (distance <= 5) * distance * 2.5 + (distance > 5) * (12.5 + (distance - 5) * 1.5);
//	double finalTariff = (tariff <= 20) * tariff + (tariff > 20) * tariff * 1.1;
//
//	std::cout << "You need to pay: " << finalTariff << "€";
//
//}