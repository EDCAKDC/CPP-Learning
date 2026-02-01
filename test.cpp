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

/*
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
*/


/******************************************************

Date: 2026-01-31

Topic: C++ loops (for/while), EOF input, sum/max/avg

Notes:

Practiced for-loop when count is known (read n numbers)

Used "seed first value" to initialize max correctly

(avoid wrong max when numbers can be negative)

Used while (std::cin >> x) to read until EOF

Computed average with double cast: (double)sum / cnt

Learned break/continue idea (control loop flow)
******************************************************/

/*
int main() {
    int n;
    std::cout << "Input n " << '\n';
    std::cin >> n;
    if (n <= 0) {
        return 0;
    }

    long long sum = 0;

    int mx;
    std::cout << "Input mx " << '\n';
    std::cin >> mx;
    sum += mx;
    for (int i = 1; i < n; i++) {
        int x;
        std::cin >> x;
        sum += x;
        if (x > mx){
            mx = x;
        }
    }
    std::cout << "sum = " << sum << '\n';
    std::cout << "max = " << mx << '\n';
    return 0;
}
*/


int main() {
    long long sum = 0;
    int cnt = 0;
    int x;

    while (std::cin >> x) {
        sum += x;
        cnt++;
    }

    std::cout << "count = " << cnt << '\n';
    std::cout << "sum = " << sum << '\n';

    if (cnt > 0) {
        double avg = (double)sum / cnt;
        std::cout << "avg = " << avg << '\n';
    } else {
        std::cout << "avg = N/A\n";
    }
    return 0;
}















