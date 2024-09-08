#include <iostream>
#include <string>
#include <set>

double addition(double x1, double x2) {
    return x1 + x2;
}
double subtraction(double x1, double x2) {
    return x1 - x2;
}
double multiplication(double x1, double x2) {
    return x1 * x2;
}
double division(double x1, double x2) {
    if (x2 == 0) {
        throw std::runtime_error("Division by zero error");
    }
    return x1 / x2;
}

double cosine(double angle) {

    const double PI = 3.14159265;
    const double TWOPI = 2 * PI;

    bool inverse = false;

    while (angle > TWOPI) {
        angle -= TWOPI;
    }
    while (angle < 0) {
        angle += TWOPI;
    }

    if (angle > PI && angle < TWOPI) {
        angle = TWOPI - angle;
    }

    if (angle > PI / 2 && angle < PI) {
        angle = PI - angle;
        inverse = true;
    }

    double result = 1 - 1.0 / 2 * pow(angle, 2) + 1.0 / 24 * pow(angle, 4);

    return inverse ? -result : result;
}

int main() {

    const double PI = 3.14159265;

    double num1, num2, theta, result;
    char op;

    std::string function;
    std::string sin = "sin";
    std::string cos = "cos";
    std::string tan = "tan";

    std::string input;

    std::set<std::string> acceptedfunctions = {"cos", "sin", "tan"};

    std::cout << "Enter a trig function (cos, sin, tan): ";
    std::cin >> function;

    if (acceptedfunctions.find(function) == acceptedfunctions.end()) {
        std::cout << "No trig function with the name " << function << '\n';
    }

    else {
        std::cout << "Enter an angle: ";
        std::cin >> theta;

        if (function == "cos") {
            result = cosine(theta);
            std::cout << result << '\n';
        }
        if (function == "sin") {
            result = cosine(PI / 2 - theta);
            std::cout << result << '\n';
        }
        if (function == "tan") {
            result = cosine(PI / 2 - theta) / cosine(theta);
            std::cout << result << '\n';
        }
    }

    return 0;
}