# **Strings in C**

This folder delves into **Strings**, an essential part of text processing in C programming. Strings are arrays of characters terminated by a null character (`\0`) and are widely used to store and manipulate textual data.

---

## 🚀 **Topics Covered**

1. **String Basics**  
   - Declaring, initializing, and printing strings.  
   - Example:  
     ```c
     char name[] = "FORAM";
     printf("%s", name); // Outputs: FORAM
     ```

2. **Standard String Functions**  
   - Using standard library functions to manipulate strings, such as `strlen`, `strcpy`, `strcmp`, and more.  

3. **Palindrome Check**  
   - Checking whether a string is a palindrome (reads the same backward and forward).  
   
4. **String Concatenation**  
   - Combining two strings into one.  

---

## 📂 **Programs Included**

| **Program Name**             | **Description**                                                      |
|------------------------------|----------------------------------------------------------------------|
| `string_basics.c`            | Demonstrates declaring, initializing, and printing strings.          |
| `string_functions.c`         | Examples of standard string functions like `strlen`, `strcpy`, etc. |
| `palindrome_check.c`         | Checks if a given string is a palindrome.                            |
| `string_concatenation.c`     | Concatenates two strings into one.                                   |

---

## 🌟 **Quick Tips**

- **Null Terminator (`\0`)**: Every string in C ends with a null character (`\0`) to indicate the end of the string.
- **String Initialization**:  
   You can initialize strings in two ways:  
   ```c
   char name[] = "FORAM";  // Implicit null-terminator
   char class[] = {'F', 'O', 'R', 'A', 'M', '\0'};  // Explicit null-terminator
   ```
- **Memory Layout**: Strings are stored in contiguous memory locations, with each character taking one byte, and the last byte is reserved for the null terminator (`\0`).
  
- **Standard Functions**: Use `string.h` functions to simplify string operations:  
   - `strlen(str)` - Returns the length of the string excluding the null character.  
   - `strcpy(newStr, oldStr)` - Copies the content of `oldStr` into `newStr`.  
   - `strcat(firstStr, secStr)` - Concatenates `secStr` to the end of `firstStr`.  
   - `strcmp(firstStr, secStr)` - Compares two strings lexicographically. Returns 0 if equal, a positive value if the first string is greater, or a negative value if the second string is greater.

- **Input and Output**:  
   Use `%s` to print a string:  
   ```c
   printf("%s", name);  // Outputs: name of the string
   ```

   However, **`scanf`** cannot handle multi-word strings with spaces. To handle such inputs, use `gets()` or `fgets()`:
   ```c
   fgets(str, 100, stdin);  // Safely reads a line of input
   ```

- **String as Pointers**:  
   Strings can be represented using pointers, which point to the first character in the string:
   ```c
   char *str = "Hello World";
   printf("%s", str);  // Outputs: Hello World
   ```
---

## 🛠 **How to Run These Programs**

1. Open a terminal or your favorite IDE (e.g., Code::Blocks, Visual Studio Code, or GCC).  
2. Compile the program:  
   ```bash
   gcc program_name.c -o program_name
   ```
3. Run the compiled program:  
   ```bash
   ./program_name
   ```

---
