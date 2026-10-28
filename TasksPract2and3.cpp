//Practicum 2 Tasks

//Task 1
//
//int main()
//{
//    int num1, num2;
//    std::cout << "Enter a whole number: ";
//    std::cin >> num1;
//    std::cout << "Enter a whole number: ";
//    std::cin >> num2;
//
//    int smallerNum = num1 <= num2 ? num1 : num2;
//    std::cout << smallerNum;
//}

//Task 2
//
//#include <iostream>
//
//int main()
//{
//    int year;
//    std::cout << "Enter a year: ";
//    std::cin >> year;
//
//    if (year >= 0)
//        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        {
//            std::cout << "yes";
//        }
//        else
//        {
//            std::cout << "no";
//        }
//	  else
//	  {
//	    std::cout << "Invalid input";
//	  }
//}

//Task 3
//
//#include <iostream>
//
//int main()
//{
//    int num1, num2, num3;
//    std::cout << "Enter a number: ";
//    std::cin >> num1;
//    std::cout << "Enter a number: ";
//    std::cin >> num2;
//    std::cout << "Enter a number: ";
//    std::cin >> num3;
//
//    if (num1 > 0 && num2 > 0 && num3 > 0)
//        if (num1 < num2 + num3 && num2 < num1 + num3 && num3 < num2 + num1)
//        {
//            std::cout << "yes";
//        }
//        else
//        {
//            std::cout << "no";
//        }
//}

//Task 4
//
//#include <iostream>
//
//int main()
//{
//    float coordX, coordY;
//    std::cout << "Enter an X value: ";
//    std::cin >> coordX;
//    std::cout << "Enter a Y value: ";
//    std::cin >> coordY;
//
//    if (coordX == 0 || coordY == 0)
//    {
//        std::cout << "On axis";
//    }
//    else if (coordX > 0)
//    {
//        if (coordY > 0)
//        {
//            std::cout << "First";
//        }
//        else
//        {
//            std::cout << "Fourth";
//        }
//    }
//    else if (coordX < 0)
//    {
//        if (coordY > 0)
//        {
//            std::cout << "Second";
//        }
//        else
//        {
//            std::cout << "Third";
//        }
//    }
//}

//Task 5
//
//#include <iostream>
//
//int main()
//{
//    int month;
//    std::cout << "Enter a month number: ";
//    std::cin >> month;
//
//    if (month >= 1 && month <= 12)
//    {
//        switch (month)
//        {
//        case 1:
//            std::cout << "31";
//            break;
//        case 2:
//            int year;
//            std::cout << "Enter a year: ";
//            std::cin >> year;
//            if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//            {
//                std::cout << "29";
//            }
//            else
//            {
//                std::cout << "28";
//            }
//            break;
//        case 3:
//            std::cout << "31";
//            break;
//        case 4:
//            std::cout << "30";
//            break;
//        case 5:
//            std::cout << "31";
//            break;
//        case 6:
//            std::cout << "30";
//            break;
//        case 7:
//            std::cout << "31";
//            break;
//        case 8:
//            std::cout << "31";
//            break;
//        case 9:
//            std::cout << "30";
//            break;
//        case 10:
//            std::cout << "31";
//            break;
//        case 11:
//            std::cout << "30";
//            break;
//        case 12:
//            std::cout << "31";
//            break;
//        }
//    }
//    else
//    {
//        std::cout << "Invalid input";
//    }
//}

//Task 6
//
//#include <iostream>
//
//int main()
//{
//    int num1, num2;
//    std::cout << "Enter a 2 digit integer: ";
//    std::cin >> num1;
//    std::cout << "Enter a 2 digit integer: ";
//    std::cin >> num2;
//
//    if (num1 >= 10 && num1 </ 100 <= 99 && num2 >= 10 && num2 <= 99)
//    {
//        std::cout << num1 / 10 * 1000 + num1 % 10 * 100 + num2 / 10 * 10 + num2 % 10 << " - ";
//        if (num1 % 10 > num1 / 10 && num2 % 10 > num2 / 10 && num1 % 10 < num2 / 10)
//        {
//            std::cout << "YES";
//        }
//        else
//        {
//            std::cout << "NO";
//        }
//    }
//    else
//    {
//        std::cout << "Invalid input";
//    }
//}

//Task 7
//
//#include <iostream>
//
//int main()
//{
//    int side;
//    std::cout << "Enter a side length: ";
//    std::cin >> side;
//
//    if (side > 0)
//    {
//        int coordX, coordY;
//        std::cout << "Enter x value: ";
//        std::cin >> coordX;
//        std::cout << "Enter y value: ";
//        std::cin >> coordY;
//
//        int row = coordY / side;
//        int column = coordX / side;
//
//        if ((row + column) % 2 == 1)
//        {
//            std::cout << "white";
//        }
//        else
//        {
//            std::cout << "black";
//        }
//    }
//}

//Task 8
//
//#include <iostream>
//
//int main()
//{
//    std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder from division\n";
//    int operation;
//    std::cout << "Enter a choice: ";
//    std::cin >> operation;
//
//    int num1, num2;
//    std::cout << "Enter a number: ";
//    std::cin >> num1;
//    std::cout << "Enter a second number: ";
//    std::cin >> num2;
//    double result = 0;
//
//    switch (operation)
//    {
//    case 1:
//        result = num1 + num2;
//        std::cout << result;
//        break;
//    case 2:
//        result = num1 - num2;
//        std::cout << result;
//        break;
//    case 3:
//        result = num1 * num2;
//        std::cout << result;
//        break;
//    case 4:
//        if (num2 != 0)
//        {
//            result = num1 * 1.0 / num2;
//            std::cout << result;
//            break;
//        }
//        else
//        {
//            std::cout << "Division by zero";
//            break;
//        }
//    case 5:
//        if (num2 != 0)
//        {
//            result = num1 % num2;
//            std::cout << result;
//            break;
//        }
//        else
//            std::cout << "Division by zero";
//        break;
//    default:
//        std::cout << "Invalid input";
//    }
//}

//Task 9
//
//#include <iostream>
//
//int main()
//{
//    double side1, side2, side3;
//    std::cout << "Enter a side: ";
//    std::cin >> side1;
//    std::cout << "Enter a side: ";
//    std::cin >> side2;
//    std::cout << "Enter a side: ";
//    std::cin >> side3;
//
//    if (side1 > 0 && side2 > 0 && side3 > 0)
//    {
//        double biggestSide = side1 >= side2 ? side1 : side2;
//        biggestSide = biggestSide >= side3 ? biggestSide : side3;
//
//        if (2 * biggestSide < side1 + side2 + side3)
//        {
//            if (side1 == side2 && side2 == side3)
//            {
//                std::cout << "Equilateral\n";
//            }
//            else if (side1 == side2 || side1 == side3 || side2 == side3)
//            {
//                std::cout << "Isosceles\n";
//            }
//            else
//            {
//                std::cout << "Scalene\n";
//            }
//            if (2 * biggestSide * biggestSide > side1 * side1 + side2 * side2 + side3 * side3)
//            {
//                std::cout << "Obtuse";
//            }
//            else if (2 * biggestSide * biggestSide == side1 * side1 + side2 * side2 + side3 * side3)
//            {
//                std::cout << "Right";
//            }
//            else
//            {
//                std::cout << "Acute";
//            }
//        }
//        else
//        {
//            std::cout << "Not a triangle";
//        }
//    }
//    else
//    {
//        std::cout << "Invalid input";
//    }
//}


//Practicum 3 Tasks

//Task 1
//#include <iostream>
//
//int main()
//{
//	int num;
//	std::cout << "Enter a natural number: ";
//	std::cin >> num;
//
//	if (num >= 0)
//	{
//		for (int x = 1; x < num; x++)
//		{
//			int y;
//			y = num - x;
//
//
//			std::cout << "x = " << x << " y = " << y << std::endl;
//		}
//	}
//}

//Task 2
//
//#include <iostream>
//int main()
//{
//	int num1, num2;
//	std::cout << "Enter an integer: ";
//	std::cin >> num1;
//	std::cout << "Enter another integer: ";
//	std::cin >> num2;
//
//	if (num1 > 0 && num2 > 0)
//	{
//		int min = num1 < num2 ? num1 : num2;
//		for (int option = min; option >= 1; option--)
//		{
//			if (num1 % option == 0 && num2 % option == 0)
//			{
//				std::cout << option << " ";
//			}
//		}
//	}
//
//}

//Task 3
//#include <iostream>
//
//int main()
//{
//    int num;
//    int sum = 0;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//
//    if (num > 0)
//    {
//        for (int divisor = 1; divisor < num; divisor++)
//        {
//            if (num % divisor == 0)
//            {
//                sum += divisor;
//            }
//        }
//        if (sum == num)
//        {
//            std::cout << "Perfect";
//        }
//        else
//        {
//            std::cout << "Not perfect";
//        }
//    }
//	  else
//	  {
//		std::cout << "Invalid input";
//    }
//}

//Task 4
//
//#include <iostream>
//
//int main()
//{
//    int side;
//    std::cout << "Enter square side: ";
//    std::cin >> side;
//
//    if (side > 0)
//    {
//        for (int row = 1; row <= side; row++)
//        {
//            for (int minusTimes = row - 1; minusTimes > 0; minusTimes--)
//            {
//                std::cout << "-";
//            }
//            std::cout << "0";
//            for (int plusTimes = side - row; plusTimes > 0; plusTimes--)
//            {
//                if (plusTimes == 1)
//                {
//                    std::cout << "+" << std::endl;
//                }
//                else
//                {
//                    std::cout << "+";
//                }
//            }
//        }
//
//    }
//}

//Task 5
//
//#include <iostream>
//
//int main()
//{
//    int num, position;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//    std::cout << "Enter a position: ";
//    std::cin >> position;
//
//
//    if (position < 1)
//    {
//        std::cout << "Dont have digit on index " << position;
//    }
//    else
//    {
//        for (int indexCount = 1; indexCount < position; indexCount++)
//        {
//            num /= 10;
//        }
//        if (num == 0)
//        {
//            std::cout << "Dont have digit on index " << position;
//        }
//        else
//        {
//            num = num % 10;
//            std::cout << num;
//        }
//    }
//}

//Task 6
//#include <iostream>
//
//int main()
//{
//    long long binary;
//    std::cout << "Enter a number in binary: ";
//    std::cin >> binary;
//    int power2 = 1;
//    int decimal = 0;
//
//    do
//    {
//        if (binary % 10 == 1)
//        {
//            decimal += power2;
//        }
//
//        power2 *= 2;
//        binary /= 10;
//
//    } while (binary != 0);
//    std::cout << decimal;
//
//}

//Task 7
//
//#include <iostream>
//
//int main()
//{
//    long long baseNum, baseNumCopy, numSquared;
//    std::cout << "Enter a number: ";
//    std::cin >> baseNum;
//
//    baseNumCopy = baseNum;
//    numSquared = baseNum * baseNum;
//
//    long long lastDigits = 0;
//    long long indexMultiplier = 1;
//
//    if (baseNum >= 0)
//    {
//        do
//        {
//            lastDigits += (numSquared % 10) * indexMultiplier;
//            numSquared /= 10;
//            baseNumCopy /= 10;
//            indexMultiplier *= 10;
//        } while (baseNumCopy > 0);
//
//        if (lastDigits == baseNum)
//        {
//            std::cout << "Automorphic";
//        }
//        else
//        {
//            std::cout << "Not automorphic";
//        }
//    }
//    else
//    {
//        std::cout << "Invalid input!";
//    }
//}

//Task 8
//
//#include <iostream>
//
//int main()
//{
//    long long num;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//
//    if (num > 1)
//    {
//        int maxNum = num;
//        int steps = 0;
//        std::cout << "Sequence: " << num << " ";
//        do
//        {
//            if (num % 2 == 0)
//            {
//                num /= 2;
//            }
//            else
//            {
//                num = 3 * num + 1;
//                maxNum = num > maxNum ? num : maxNum;
//            }
//            steps += 1;
//
//            std::cout << num << " ";
//        } while (num > 1);
//
//        std::cout << "\n" << "Steps: " << steps << "\n";
//        std::cout << "Max value: " << maxNum;
//    }
//    else if (num == 1)
//    {
//        std::cout << "Sequence: 1\n" << "Steps: 0\n" << "Max value: 1";
//    }
//    else
//    {
//        std::cout << "Invalid input";
//    }
//}


//Task 9
//
//#include <iostream>
//
//int main()
//{
//    int numerator, denominator;
//    std::cout << "Enter a numerator: ";
//    std::cin >> numerator;
//    std::cout << "Enter a denominator: ";
//    std::cin >> denominator;
//
//
//    if (denominator != 0)
//    {
//        int copyNumer = numerator > 0 ? numerator : -1 * numerator;
//        int copyDenomi = denominator > 0 ? denominator : -1 * denominator;
//        int divisor = copyNumer <= copyDenomi ? copyNumer : copyDenomi;
//        bool negativeNumerator = numerator < 0;
//        bool negativeDenominator = denominator < 0;
//
//        for (divisor; divisor > 1; divisor--)
//        {
//            if (numerator % divisor == 0 && denominator % divisor == 0)
//            {
//                numerator /= divisor;
//                denominator /= divisor;
//            }
//        }
//        if (numerator == 0)
//        {
//            std::cout << "0";
//        }
//        else if (negativeNumerator && negativeDenominator)
//        {
//            numerator *= -1;
//            denominator *= -1;
//            std::cout << numerator << "/" << denominator;
//        }
//        else if (negativeNumerator || negativeDenominator)
//        {
//            if (negativeNumerator)
//            {
//                numerator *= -1;
//            }
//            else if (negativeDenominator)
//            {
//                denominator *= -1;
//            }
//            std::cout << "-" << numerator << "/" << denominator;
//        }
//        else
//        {
//            std::cout << numerator << "/" << denominator;
//        }
//    }
//    else
//    {
//        std::cout << "Invalid input";
//    }
//}

//Task 10
//
//#include <iostream>
//
//int main()
//{
//    int num, numCopy;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//    numCopy = num;
//
//    int repeatingNum = 0;
//    int timesFound = 0;
// 
//    if (num >= 0)
//	  {
	//    for (int candidate = 0; candidate <= 9; candidate++)
	//    {
	//        int tempCount = 0;
	//
	//        while (numCopy > 0)
	//        {
	//            if (numCopy % 10 == candidate)
	//            {
	//                tempCount += 1;
	//            }
	//            numCopy /= 10;
	//        }
	//        numCopy = num;
	//		  if (numCopy == 0 && candidate == 0)
	//		  {
	// 				  tempCount = 1;
	//        }
	//        if (tempCount > timesFound)
	//        {
	//            repeatingNum = candidate;
	//            timesFound = tempCount;
	//        }
	//        else if (tempCount == timesFound)
	//        {
	//            repeatingNum = repeatingNum >= candidate ? repeatingNum : candidate;
	//        }
	//    }
	//    std::cout << repeatingNum;
	//}
	//else
	//{
	//   std::cout << "Invalid input";
	//}
//}