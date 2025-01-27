#include <iostream>
int main() {
    int a = 1;
    int b = 0;
    char c = ''; // Initialize with a space or valid default value

    std::cout << "Enter two numbers and an operator (+, -, *, /):\n";
    std::cin >> a >> b >> c;

    switch (c) {
        case '-':
            std::cout << "a - b = " << a - b << "\n";
            break;
        case '+':
            std::cout << "a + b = " << a + b << "\n";
            break;
        case '*':
            std::cout << "a * b = " << a * b << "\n";
            break;
        case '/':
            if (b != 0)
                std::cout << "a / b = " << a / b << "\n";
            else
                std::cout << "Error: Division by zero\n";
            break;
        default:
            std::cout << "Invalid operator. Please use +, -, *, or /.\n";
            break;
    }

    return 0;
}

