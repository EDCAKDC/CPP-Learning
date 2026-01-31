#include <iostream>

/* int main() {
    //int a =2, b=6;
    int a, b;

    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;

    std::cout << "sum = " << a + b << '\n';
    std::cout << "diff = " << a - b << '\n';
    std::cout << "prod = " << a * b << '\n';
    //return 0;

}*/


/*
int main() {
    double a,b;

    std::cout << "Input a " << '\n';
    std::cin >> a;

    std::cout << "Input b " << '\n';
    std::cin >> b;

    double avg = (a + b) / 2;
    std::cout << "Average = " << avg << '\n';
}
*/

/*
int main() 
{
    int a;
    std::cout << "Input a " << '\n';
    std::cin >> a;

    bool is_positive = (a > 0);
    std::cout << is_positive;


}
*/

/*
int main()
{
    int a;
    std::cout << "Input a " << '\n';
    std::cin >> a;

    std::cout << std::boolalpha << (a > 0);
}
*/

/*
int main()
{
    char a;
    std::cout << "Input a " << '\n';
    std::cin >> a;

    if (a == 'y') {
        std::cout << "yes" << '\n';
    } else {
        std::cout << "no" << '\n';
    }

    return 0;
}
*/

/******************************************************
 * Date: 2026-01-30
 * Topic: C++ function return type & boolalpha
 * Notes:
 *  - Learned that function return type is fixed
 *  - double -> int will truncate decimal
 *  - std::boolalpha prints true/false instead of 1/0
 ******************************************************/

/*
 double add(double x, double y)
{
    return x + y;
}

int main() {
    double a = 5.7, b = 9.5;
    std::cout << add(a, b) << '\n';
}
*/

/*
double prod(double x, double y)
{
    return x * y;
}

int main() {

    double a, b;

    std::cout << "Input a" << '\n';
    std::cin >> a;

    std::cout << "Input b" << '\n';
    std::cin >> b;

    std::cout << "Result: " << prod(a, b) << '\n';
    return 0;
}
*/

double prod(double x, double y)
{
    return x * y;
}

int main() {

    double a, b;

    std::cout << "Input a" << '\n';
    if (!(std::cin >> a)){
        std::cerr << "Invalid input for a\n";
        return 1;
    }

    std::cout << "Input b" << '\n';
    if (!(std::cin >> b)){
        std::cerr << "Invaild input for b\n";
        return 1;
    }

    std::cout << "Result: " << prod(a, b) << '\n';
    return 0;
}