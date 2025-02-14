# stdlib.h

The `stdlib.h` library provides functions for memory allocation, random number generation, process control, and more.

---

### Functions Covered

1. **Memory Management**
   - `malloc()`: Allocates a block of memory.
   - `calloc()`: Allocates a block of memory and initializes it to zero.
   - `free()`: Frees allocated memory.

2. **Random Number Generation**
   - `rand()`: Generates pseudo-random numbers.
   - `srand()`: Seeds the random number generator.

3. **Process Control**
   - `exit()`: Terminates the program.
   - `atexit()`: Registers a function to be executed on program termination.

---

### Programs in This Folder

1. **memory_management.c**
   - Demonstrates `malloc`, `calloc`, and `free`.

2. **random_numbers.c**
   - Explores random number generation with `rand` and `srand`.

3. **exit_handling.c**
   - Showcases process termination and exit handling using `exit` and `atexit`.

---

### Usage
Compile and run the programs using a C compiler:
```bash
gcc memory_management.c -o memory_management && ./memory_management
gcc random_numbers.c -o random_numbers && ./random_numbers
gcc exit_handling.c -o exit_handling && ./exit_handling
