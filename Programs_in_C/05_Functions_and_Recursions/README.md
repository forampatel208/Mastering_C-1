# **Functions and Recursion in C**  

This folder dives into **functions and recursion**, fundamental tools for writing modular and efficient code in C. With these, we can improve code reusability, reduce redundancy, and solve complex problems more elegantly.  

---

## 🚀 **Topics Covered**  

1. **Defining Functions**  
   - Learn to break your program into reusable modules.  
   - Syntax:  
     ```c  
     void functionName() {  
         // Function body  
     }  
     ```  

2. **Function Prototypes**  
   - Declare the function signature before its use to inform the compiler.  
   - Syntax:  
     ```c  
     returnType functionName(parameterList);  
     ```  

3. **Passing Arguments**  
   - **By Value**: Copies the value to the function; changes do not affect the original variable.  
   - **By Reference**: Passes the memory address; changes affect the original variable.  

4. **Return Values**  
   - Functions can return a value, but only one value at a time.  

5. **Recursion**  
   - A function calling itself for repetitive sub-problems (e.g., factorial, Fibonacci).  
   - **Key Properties**:  
     - Can simplify complex problems.  
     - Risks: Infinite recursion may cause a **stack overflow**.  

6. **Scope of Variables**  
   - **Local Scope**: Variables defined inside a function are accessible only within it.  
   - **Global Scope**: Variables accessible across all functions.  

7. **Function Types**  
   - **Library Functions**: Built-in, like `printf()`, `scanf()`.  
   - **User-Defined Functions**: Custom functions defined by the programmer.  

---

## 📂 **Programs Included**  

| Program Name             | Description                                                       |  
|--------------------------|-------------------------------------------------------------------|  
| `basic_functions.c`      | Demonstrates defining and using functions in C.                  |  
| `function_parameters.c`  | Shows passing parameters by value and reference.                 |  
| `recursion_example.c`    | Example of recursion (e.g., calculating factorial or Fibonacci). |  
| `scope_of_variables.c`   | Explores variable scope and its significance in functions.       |  

---

## 🌟 **Quick Tips**  

1. **Why Use Functions?**  
   - Functions increase **reusability** by allowing the same block of code to be executed multiple times.  
   - Improves program organization by dividing it into logical sections.  

2. **Function Parameters**  
   - **Arguments**: Values passed during a function call (actual parameters).  
   - **Parameters**: Variables in the function definition that receive the argument (formal parameters).  

   Example:  
   ```c  
   int sum(int a, int b) {  
       return a + b;  
   }  
   int main() {  
       int result = sum(5, 10); // 5 and 10 are arguments  
       printf("%d", result);  
   }  
   ```  

3. **Recursion vs. Iteration**  
   - Recursion can provide **simpler solutions** for problems with repetitive structures.  
   - Iteration uses **loops** (e.g., `for`, `while`), while recursion uses **function calls**.  
   - **Risks**: Ensure recursion has a **base condition** to avoid stack overflow.  

   Example of recursion:  
   ```c  
   int factorial(int n) {  
       if (n == 0) return 1;  
       return n * factorial(n - 1);  
   }  
   ```  

4. **Variable Scope**  
   - Local variables inside functions are temporary and destroyed after the function exits.  
   - Global variables persist throughout the program and can lead to unintended side effects if modified elsewhere.  

---

## 🛠 **How to Run These Programs**  

1. Open a terminal or your favorite IDE (e.g., Code::Blocks, Visual Studio Code, or GCC).  
2. Compile the program using:  
   ```bash  
   gcc program_name.c -o program_name  
   ```  
3. Run the compiled program:  
   ```bash  
   ./program_name  
   ```  
---
