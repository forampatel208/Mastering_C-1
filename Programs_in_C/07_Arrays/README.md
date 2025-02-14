# **Arrays in C**

This folder focuses on **Arrays**, one of the most fundamental data structures in C programming. Arrays are essential for storing collections of data efficiently and performing operations on them.

---

## 🚀 **Topics Covered**

1. **Array Basics**  
   - Declaring, initializing, and accessing arrays.  
   - Example:  
     ```c
     int marks[3] = {97, 98, 89};
     printf("%d", marks[0]); // Accesses first element, 97
     ```

2. **Multi-dimensional Arrays**  
   - Understanding and using 2D arrays for storing tabular data.  
   - Example:  
     ```c
     int arr[2][2] = {{1, 2}, {3, 4}};
     printf("%d", arr[0][1]); // Accesses second element in the first row, 2
     ```

3. **Array Manipulation**  
   - Performing operations such as finding the maximum or minimum element in an array.  
   - Example:  
     ```c
     int max = arr[0];
     for (int i = 1; i < n; i++) {
         if (arr[i] > max) {
             max = arr[i];
         }
     }
     ```

4. **Sorting Algorithms**  
   - Implementing basic sorting algorithms like **Bubble Sort** to organize array data.  
   - Example (Bubble Sort):  
     ```c
     void bubbleSort(int arr[], int n) {
         for (int i = 0; i < n-1; i++) {
             for (int j = 0; j < n-i-1; j++) {
                 if (arr[j] > arr[j+1]) {
                     int temp = arr[j];
                     arr[j] = arr[j+1];
                     arr[j+1] = temp;
                 }
             }
         }
     }
     ```

---

## 📂 **Programs Included**

| **Program Name**               | **Description**                                                      |
|---------------------------------|----------------------------------------------------------------------|
| `array_basics.c`               | Demonstrates array initialization, access, and basic operations.      |
| `multi_dimensional_arrays.c`   | Explores the use of 2D arrays and how to access elements.            |
| `array_manipulation.c`         | Implements array operations such as finding the maximum element.     |
| `sorting_arrays.c`             | Demonstrates sorting an array using the **Bubble Sort** algorithm.   |

---

## 🌟 **Quick Tips**

- **Zero-Indexed Arrays**: Arrays in C are zero-indexed, which means the first element is accessed using index `0`.
- **Pointer Arithmetic**: In C, arrays are closely related to pointers. For example, the name of the array (`arr`) is a pointer to the first element (`arr[0]`). Pointer arithmetic can be used to navigate through arrays:
  ```c
  int *ptr = arr;
  printf("%d", *(ptr + 1)); // Accesses arr[1]
  ```
- **Array Traversal**: You can use loops to traverse through arrays:
  ```c
  for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
  }
  ```
- **Arrays as Function Arguments**: Arrays can be passed to functions for processing.  
  Example function declaration and call:  
  ```c
  void printNumbers(int arr[], int n); // Function declaration
  printNumbers(arr, n);                // Function call
  ```
  Alternatively, arrays can also be passed as pointers:  
  ```c
  void printNumbers(int *arr, int n);
  ```

- **Multi-dimensional Arrays**: For 2D arrays, nested loops are used to traverse rows and columns:  
  Example:  
  ```c
  int arr[2][2] = {{1, 2}, {3, 4}};
  for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
          printf("%d ", arr[i][j]);
      }
      printf("\n");
  }
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
