//Task 1
//#include <iostream>
//
//unsigned digitsCount(long long a)
//{
//    unsigned count = 0;
//    a /= 10;
//    count++;
//
//    while (a != 0)
//    {
//        a /= 10;
//        count++;
//    }
//
//    return count;
//}
//
//
//int main()
//{
//    long long num;
//    std::cout << "Enter an integer: ";
//    std::cin >> num;
//
//    std::cout << digitsCount(num);
//}

//Task 2

//#include <iostream>
//
//int square(int x)
//{
//    return x * x;
//}
//
//long long sumOfSquares(int n)
//{
//    long long sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += square(i);
//    }
//
//    return sum;
//
//}
//
//int main()
//{
//    int num;
//    std::cout << "Enter a natural number: ";
//    std::cin >> num;
//
//    if (num >= 0)
//    {
//        std::cout << sumOfSquares(num);
//    }
//    else
//    {
//        std::cout << "Invalid input";
//    }
//}

//Task 3

//#include <iostream>
//
//long long sumOfSquares(int x, int y)
//{
//    return x * x + y * y;
//}
//
//int isOnCircle(int x, int y)
//{
//    return x == y;
//}
//int main()
//{
//    int a, b, c, d;
//    std::cout << "Enter x and y coordinates of point A: ";
//    std::cin >> a >> b;
//    std::cout << "Enter x and y coordinates of point B: ";
//    std::cin >> c >> d;
//
//    int sumA = sumOfSquares(a, b);
//    int sumB = sumOfSquares(c, d);
//
//    if (isOnCircle(sumA, sumB))
//    {
//        std::cout << "yes";
//    }
//    else
//    {
//        std::cout << "no";
//    }
//}

//Task 4

//#include <iostream>
//#include <cmath>
//
//double sideLength(int x1, int y1, int x2, int y2)
//{
//    double side = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//    return side;
//}
//
//double circumference(double a, double b, double c)
//{
//    return a + b + c;
//}
//
//int main()
//{
//    int x1, y1, x2, y2, x3, y3;
//    std::cout << "Enter x and y coordinates of point A: ";
//    std::cin >> x1 >> y1;
//    std::cout << "Enter x and y coordinates of point B: ";
//    std::cin >> x2 >> y2;
//    std::cout << "Enter x and y coordinates of point C: ";
//    std::cin >> x3 >> y3;
//
//    double sideA = sideLength(x1, y1, x2, y2);
//    double sideB = sideLength(x2, y2, x3, y3);
//    double sideC = sideLength(x3, y3, x1, y1);
//
//    std::cout << circumference(sideA, sideB, sideC);
//}

//Task 5

//#include <iostream>
//
//bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3)
//{
//    return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) == 0;
//}
//
//int main()
//{
//    int x1, y1, x2, y2, x3, y3;
//    std::cout << "Enter x and y of point A: ";
//    std::cin >> x1 >> y1;
//    std::cout << "Enter x and y of point B: ";
//    std::cin >> x2 >> y2;
//    std::cout << "Enter x and y of point C: ";
//    std::cin >> x3 >> y3;
//
//    if (areCollinear(x1, y1, x2, y2, x3, y3))
//    {
//        std::cout << "yes";
//    }
//    else
//    {
//        std::cout << "no";
//    }
//}

//Task 6
//
//#include <iostream>
//
//bool isDigit(char c)
//{
//    return c >= '0' && c <= '9';
//}
//
//bool isUpper(char c)
//{
//    return c >= 'A' && c <= 'Z';
//}
//
//bool isLower(char c)
//{
//    return c >= 'a' && c <= 'z';
//}
//
//bool isAlpha(char c)
//{
//    return isLower(c) || isUpper(c);
//}
//
//bool isAlnum(char c)
//{
//    return isAlpha(c) || isDigit(c);
//}
//
//char capitalize(char c)
//{
//    if (isLower(c))
//    {
//        return c - ('a' - 'A');
//    }
//    else
//    {
//        return c;
//    }
//}
//
//char makeLower(char c)
//{
//    if (isUpper(c))
//    {
//        return c + ('a' - 'A');
//    }
//    else
//    {
//        return c;
//    }
//}
//
//int parseInt(char c)
//{
//    if (isDigit(c))
//    {
//        return c - '0';
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//char toChar(int x)
//{
//    if (x >= 0 && x <= 9)
//    {
//        return x + '0';
//    }
//    else
//    {
//        return '\0';
//    }
//}
//
//int myLog(int num, int base)
//{
//    if (num <= 0 || base <= 1)
//    {
//        return -1;
//    }
//
//    int power = 0;
//
//    while (num >= base)
//    {
//        num /= base;
//        power++;
//    }
//
//    return power;
//}
//
//double myPow(double base, int exponent)
//{
//    double result = 1;
//    long long power = exponent;
//
//    if (power < 0)
//    {
//        power = -power;
//    }
//
//    for (long long i = 0; i < power; i++)
//    {
//        result *= base;
//    }
//
//    if (exponent < 0)
//    {
//        return 1 / result;
//    }
//
//    return result;
//}
//
//long long myCeil(double num)
//{
//    long long temp = num;
//
//    if (num > temp)
//    {
//        return temp + 1;
//    }
//
//    return temp;
//}
//
//long long myFloor(double num)
//{
//    long long temp = num;
//
//    if (num < temp)
//    {
//        return temp - 1;
//    }
//
//    return temp;
//}
//
//double myAbs(double num)
//{
//    if (num >= 0)
//    {
//        return num;
//    }
//
//    return -num;
//}
//
//int main()
//{
//}

//Task 7
//
//#include <iostream>
//
//int removeHundreds(int num)
//{
//    int thousands = num / 1000;
//    int lastTwo = num % 100;
//
//    return thousands * 100 + lastTwo;
//}
//
//void findNumbers(int m, int n)
//{
//    bool found = false;
//
//    for (int i = m; i <= n; i++)
//    {
//        if (i < 1000 || i > 9999)
//        {
//            continue;
//        }
//
//        int newNum = removeHundreds(i);
//
//        if (newNum % 11 == 0)
//        {
//            std::cout << i << " ";
//            found = true;
//        }
//    }
//
//    if (!found)
//    {
//        std::cout << "No such a number!";
//    }
//}
//
//int main()
//{
//    int m, n;
//	std::cout << "Enter lower and upper bounds m and n: ";
//    std::cin >> m >> n;
//
//    findNumbers(m, n);
//}

//Task 8
//
//#include <iostream>
//
//long long mixNums(int a, int b)
//{
//    long long result = 0;
//    long long multiplier = 1;
//
//    while (a > 0 || b > 0)
//    {
//        if (a > 0)
//        {
//            int digit = a % 10;
//            result += digit * multiplier;
//            multiplier *= 10;
//            a /= 10;
//        }
//
//        if (b > 0)
//        {
//            int digit = b % 10;
//            result += digit * multiplier;
//            multiplier *= 10;
//            b /= 10;
//        }
//    }
//
//    return result;
//}
//
//int main()
//{
//    int a, b;
//	std::cout << "Enter two integers: ";
//    std::cin >> a >> b;
//
//    std::cout << mixNums(a, b);
//}

//Task 9
//
//#include <iostream>
//
//long long factorial(int n)
//{
//    long long result = 1;
//
//    for (int i = 2; i <= n; i++)
//    {
//        result *= i;
//    }
//
//    return result;
//}
//
//bool isStrong(int n)
//{
//    if (n < 0)
//    {
//        return false;
//    }
//
//    int original = n;
//    long long sum = 0;
//
//    do
//    {
//        int digit = n % 10;
//
//        sum += factorial(digit);
//
//        n /= 10;
//
//    } while (n > 0);
//
//    return sum == original;
//}
//
//int main()
//{
//    int num;
//	  std::cout << "Enter a non-negative integer: ";
//    std::cin >> num;
//
//    if (isStrong(num))
//    {
//        std::cout << "yes";
//    }
//    else
//    {
//        std::cout << "no";
//    }
//}