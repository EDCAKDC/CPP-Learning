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

## 2026-03-12
Practiced modular C++ programming by separating declarations and implementations into `utils.h` and `utils.cpp`, reused shared helper functions in multiple programs, and learned how to build multiple executables in the same CMake project.

## 2026-03-15
Practiced defining a custom C++ class by creating `word_counter.h` and `word_counter.cpp`, learned the difference between standalone helper functions and class member functions, and used CMake to add a new executable (`word_counter_app`) in the same project.

## 2026-03-16
Practiced basic C++ class design by building a `WordCounter` class, moved the word frequency data into a private unordered_map, added public member functions such as `add()`, `print()`, `size()`, `contains()`, `get_count()`, and `clear()`, and strengthened my understanding of how objects manage their own data and behavior.

## 2026-03-18

Practiced C++ constructor basics by adding a constructor to the `WordCounter` class, learned that constructors run automatically when an object is created, initialized the `total` member to keep track of total input words, and reinforced the idea that objects should manage and initialize their own internal state.

## 2026-03-23

Practiced better C++ class design by using initializer lists in constructors, added overloaded constructors to create `WordCounter` objects with different names, worked with multiple objects in the same program, and reinforced the idea that each object maintains its own internal state independently.

## 2026-03-31

Practiced improving a C++ class by adding more practical member functions, including removing words, resetting object state, comparing two `WordCounter` objects, and returning structured data from the class instead of only printing results. Reinforced the idea of separating class declarations and implementations across `.h` and `.cpp` files, and learned how a class can expose processed data for use in main().

## 2026-04-01

Practiced C++ file I/O by extending my `WordCounter` project to read from `input.txt` and write results to `result.txt`. Learned how to use `ifstream`, `ofstream`, and file-open checks in a multi-file class project.

## 2026-04-02

Practiced C++ command line arguments by modifying my `WordCounter` project to read from a user-specified input file and write results to a user-specified output file. Learned how `argc` and `argv` work in a multi-file project.
