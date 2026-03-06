#include <iostream>
#include <vector>
#include <utility>   
#include <limits>    
#include <algorithm>
#include <unordered_map>
#include <string>
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


/*int main() {
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
}*/

/******************************************************

Date: 2026-02-19

Topic: C++ parameter passing (by value / by reference / const reference) + std namespace

Notes:
Understood pass-by-value: makes a copy, changes inside function won't affect outside

Understood pass-by-reference (&): no copy, can modify the original variable

Understood pass-by-const-reference (const &): no copy, read-only, best for large objects (e.g., vector/string)
******************************************************/

/*
void f(int x) { x += 1; }
void g(int &x) { x += 1; }
void h(const int &x) {
    std::cout << "h sees x =" << x << '\n';
}

int main() {
    int a = 10;

    f(a);
    std::cout << "after f(a), a = " << a << '\n';

    g(a);
    std::cout << "after g(a), a = " << a << '\n';

    h(a);
    return 0;
}
*/

/*
std::pair<long long, int> sum_max(const std::vector<int>& v) {
    long long sum =0;
    int mx = std::numeric_limits<int>::min();
    for (int x : v) {
        sum += x;
        if (x > mx) mx = x;
    }
    return {sum, mx};
}

int main(){
    std::vector<int> v = {5, -6, 6, 7};

    auto ans = sum_max(v);
    std::cout << "sum = " << ans.first << '\n';
    std::cout << "max = " << ans.second << '\n';

    auto [sum, mx] = sum_max(v);
    std::cout << "sum = " <<sum << ", max = " << mx << '\n';

    return 0;
}
*/

/******************************************************

Date: 2026-02-20

Topic: C++ vector basics + sum_vec (const reference)

Notes:
Learned how to use std::vector<int> (push_back, size, reserve)

Practiced reading n integers into a vector

Wrote sum_vec(const vector<int>& v) to compute sum without copying the vector

Used long long for sum to avoid overflow

******************************************************/


/*
long long sum_vec(const std::vector<int>& v) {
    long long sum = 0;
    for (int x : v) {
        sum += x;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    if (n <= 0) return 0;

    std::vector<int> v;
    v.reserve(n);

    std::cout << "Input " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "sum = " << sum_vec(v) << '\n';
    return 0;
}
*/

/*
long long mx_vec(const std::vector<int>& v) {
    int mx = std::numeric_limits<int>::min();
    for (int x : v) {
        if (x >= mx) mx = x;
    }
    return mx;
}

int main() {
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "n must be > 0\n";
        return 0;
    }
    std::vector<int> v;
    v.reserve(n);

    std::cout << "Input " << n << " integers:\n";

    for (int i =0; i < n; i++) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "max = " << mx_vec(v) << '\n';
    return 0;
}
*/

/*
long long count_pos(const std::vector<int>& v) {
    int pos = 0;
    for (int x : v) {
        if (x > 0) pos += 1;
    }
    return pos;
}

int main() {
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "n must be > 0\n";
        return 0;
    }
    std::vector<int> v;
    v.reserve(n);

    std::cout << "Input " << n << " integers:\n";

    for (int i =0; i < n; i++) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "Counts pos = " << count_pos(v) << '\n';
    return 0;
}
*/

/******************************************************
Date: 2026-02-21
Topic: C++ vector stats (sum/max/positive count) + returning multiple values
Notes:
Combined multiple statistics (sum, max, positive count) in a single pass over a vector
Used std::numeric_limits<int>::min() for safe max initialization
Practiced returning multiple results using a struct (Stats)
Refined function return types (int for max/count, long long for sum)
******************************************************/
/*
struct Stats {
    long long sum;
    int mx;
    int pos;
};

Stats stats_vec(const std::vector<int>& v) {
    Stats st;
    st.sum = 0;
    st.mx = std::numeric_limits<int>::min();
    st.pos = 0;

    for (int x : v) {
        st.sum += x;
        if (x > st.mx) st.mx = x;
        if (x > 0) st.pos++;
    }
    return st;
}

int main() {
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "n must be > 0\n";
        return 0;
    }

    std::vector<int> v;
    v.reserve(n);

    std::cout << "Input " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    Stats st = stats_vec(v);
    std::cout << "sum = " << st.sum << '\n';
    std::cout << "max = " << st.mx << '\n';
    std::cout << "pos_count = " << st.pos << '\n';
    return 0;
}
*/

/******************************************************
Date: 2026-03-02
Topic: C++ vector sorting + deduplication (sort / unique / erase)
Notes:
Practiced sorting a vector with std::sort(v.begin(), v.end())
Learned the standard dedup pattern: sort + unique + erase
Understood that unique only moves duplicates to the end (erase actually removes them)
Used v.size() after dedup to get the number of distinct elements
******************************************************/

/*
int main() {
    int n;
    std::cout << "Input n" << '\n';
    std::cin >> n;

    std::vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n ; i++ ) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::sort(v.begin(), v.end());

    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;

}
*/

/*
int main() {
    int n;
    std::cout << "Input n" << '\n';
    std::cin >> n;

    std::vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n ; i++ ) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "before = " << v.size() << '\n';

    std::sort(v.begin(), v.end());
    auto it = std::unique(v.begin(), v.end()); 
    v.erase(it, v.end());                      

    std::cout << "after = " << v.size() << '\n';

    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}
*/

/*
int main() {
    int n;
    std::cout << "Input n" << '\n';
    std::cin >> n;

    std::vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());

    std::cout << "distinct_count = " << v.size() << '\n';
    return 0;
}
*/

/******************************************************
Date: 2026-03-06
Topic: C++ unordered_map frequency counting (hash map)
Notes:
Practiced using std::unordered_map to count frequencies with cnt[key]++
Learned that operator[] creates a default value (0) for new keys
Iterated through the map using for (auto &kv : cnt) to read key/value pairs
Tracked the maximum frequency item during iteration (most frequent element)
******************************************************/

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<std::string, int> cnt;

    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin >>  word;
        cnt[word]++;
    }

    for (auto &kv : cnt) {
        std::cout << kv.first << " : " << kv.second << '\n';
    }

    std::string best_word = "";
    int best_count = 0;

    for (auto &kv : cnt) {
        if (kv.second > best_count) {
            best_count = kv.second;
            best_word = kv.first;
        }
    }

    std::cout << "most frequent = " << best_word
              << ", count = " << best_count << '\n';
    
    return 0;
}














































































