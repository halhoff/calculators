#include <iostream>

int digits(int x) {
    
    std::string num = std::to_string(x);

    return num.length();
}

double inversefunction(double x) {
    
    int length = digits(x);
    double result = pow(0.1, length);

    for (int i = 0; i < 8; i++) {
        result = result * (2 - x * result);
    }
    
    return result;
}

int main() {

    double x, result;

    std::cout << "Enter a number to take the inverse of: ";
    std::cin >> x;

    result = inversefunction(x);

    std::cout << result << '\n';
    
    return 0;
}