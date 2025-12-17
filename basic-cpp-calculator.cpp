#include <iostream>
#include <math.h>

int main()
{
    //const int legal_age = 18;
    int num1, num2, choosen;

    std::cout << "First Number: " << std::endl;
    std::cin >> num1;
    std::cout << "Second Number: " << std::endl;
    std::cin >> num2;

    std::cout << "1: (+) Sum of 1 and 2: " << std::endl;
    std::cout << "2: (-) Difference of 1 and 2: " << std::endl;
    std::cout << "3: (*) Product of 1 and 2: " << std::endl;
    std::cout << "4: (/) Quotient of 1 and 2: " << std::endl;

    int total = num1 + num2;
    int minus = num1 - num2;
    int multiply = num1 * num2;

    if (num2 == 0) {
        std::cout << "Error: Cannot divide by 0." << std::endl;
        return 0;
    }

    int divide = num1 / num2;

    // Chọn phép toán
    std::cout << "Choose Option: " << std::endl;
    std::cin >> choosen;
    switch (choosen) {
    case 1:
        std::cout << "Total: " << total;
        break;
    case 2:
        std::cout << "Minus: " << minus;
        break;
    case 3:
        std::cout << "Multiply: " << multiply;
        break;
    case 4: {
        if (total % 5 != 0) {
            std::cout << "Total cant be diveded by 5";
            break;
        }
        else if (total % 2 != 0) {
            std::cout << "Total cant be diveded by 2";
            break;
        }
        else {
            std::cout << "Divide: " << divide;
            break;
        }
    }
    default:
        std::cout << "Invalid Option! - Pls try again!";
    }
}