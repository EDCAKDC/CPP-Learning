# CPP-Learning  
## 2026-01-22
Worked on C++ project structure, header/source separation, and basic CMake build workflow.  

## 2026-01-23
Worked on C++ boolean expressions, basic I/O, common `char` pitfalls, and a basic CMake build-and-run workflow.

## 2026-01-30
Worked on C++ function return types, implicit type conversion (`double` → `int`), and program flow control using `if`.
Practiced interactive input/output with `std::cin` / `std::cout`, used `std::boolalpha` for readable boolean output,
and added basic input validation with `std::cin` failure checks and error handling via `std::cerr`.

## 2026-01-31  
Practiced C++ loops (`for`/`while`) and basic interactive I/O with `std::cin`/`std::cout`. Wrote small programs to compute `sum/max` for `n` numbers and `count/sum/avg` by reading until EOF, including a `double` cast for average.

## 2026-02-19  
Practiced writing reusable functions in C++ and learned parameter passing (by value vs reference vs const reference), plus returning multiple results using `std::pair`.  

## 2026-02-20  
Practiced using `std::vector` (push_back, size, loops) and wrote simple functions that take `const vector<int>&` to compute sum/max/count without copying. 

## 2026-02-21
Implemented a simple `Stats` workflow for vectors: computed sum/max/positive-count in a single pass, used safe max initialization (`numeric_limits<int>::min()`), and practiced returning multiple results via a small struct while keeping parameters as `const vector<int>&` to avoid copying.

## 2026-03-02
Practiced sorting vectors with `std::sort` and removing duplicates using the `sort + unique + erase` pattern, then used the deduplicated size to count distinct values.

## 2026-03-06
Practiced using `std::unordered_map` to count frequencies with `cnt[key]++`, learned that `operator[]` creates missing keys with a default value, iterated over key/value pairs, and tracked the most frequent element during a single pass.

## 2026-03-10
Converted `unordered_map` counts to a `vector<pair<...>>`, sorted with a custom comparator (freq desc + tie-break), and printed TopK results.

## 2026-03-15

Practiced defining a custom C++ class by creating `word_counter.h` and `word_counter.cpp`, learned the difference between standalone helper functions and class member functions, and used CMake to add a new executable (`word_counter_app`) in the same project.

## 2026-03-12
Practiced modular C++ programming by separating declarations and implementations into `utils.h` and `utils.cpp`, reused shared helper functions in multiple programs, and learned how to build multiple executables in the same CMake project.

## 2026-03-16

Practiced basic C++ class design by building a `WordCounter` class, moved the word frequency data into a private unordered_map, added public member functions such as `add()`, `print()`, `size()`, `contains()`, `get_count()`, and `clear()`, and strengthened my understanding of how objects manage their own data and behavior.




