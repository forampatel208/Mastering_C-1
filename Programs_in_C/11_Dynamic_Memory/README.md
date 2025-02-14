# **Dynamic Memory Allocation in C**

Dynamic memory allocation allows programs to manage memory during runtime, providing flexibility to create and manipulate data structures dynamically. This folder explores the key concepts and usage of dynamic memory functions like `malloc`, `calloc`, `realloc`, and `free`.

---

## 🚀 **Topics Covered**

1. **`malloc` and `free`**  
   - `malloc` is used to allocate a specified number of bytes in memory at runtime. It returns a pointer to the allocated memory.
   - `free` is used to deallocate memory that was previously allocated using `malloc` or `calloc`. This prevents memory leaks.

2. **`calloc` and `realloc`**  
   - `calloc` allocates memory for an array of elements and initializes all bytes to zero.
   - `realloc` is used to resize a previously allocated memory block, either expanding or shrinking the allocated memory.

3. **Dynamic Arrays**  
   Creating arrays whose size is determined at runtime, providing flexibility for memory allocation based on user input or other conditions.

4. **Structures with Dynamic Memory**  
   Allocating memory dynamically for structures allows flexibility in creating and manipulating complex data types. This is especially useful when the number of structures needed is unknown at compile time.

---

## 📂 **Programs Included**

| **Program Name**                   | **Description**                                              |
|------------------------------------|--------------------------------------------------------------|
| `malloc_free.c`                    | Demonstrates the use of `malloc` and `free`.                 |
| `calloc_realloc.c`                 | Explains `calloc` and resizing with `realloc`.               |
| `dynamic_arrays.c`                 | Creating arrays dynamically at runtime.                      |
| `struct_with_dynamic_memory.c`     | Using dynamic memory allocation with structures.             |

---

## 🌟 **Quick Tips**

- Always check if memory allocation functions like `malloc` or `calloc` return `NULL` to handle memory allocation failures.  
  **Example**:  
  ```c
  if (ptr == NULL) {
      printf("Memory allocation failed\n");
      exit(1);
  }
  ```

- Free allocated memory using `free` to avoid memory leaks.  
  **Example**:  
  ```c
  free(ptr);
  ```

- Use `realloc` cautiously to prevent data corruption. If `realloc` fails, it returns `NULL`, and the original memory is not freed, so always check for successful resizing.  
  **Example**:  
  ```c
  int *new_ptr = realloc(ptr, new_size);
  if (new_ptr == NULL) {
      printf("Memory reallocation failed\n");
      free(ptr);  // Free the old memory if reallocation fails
  } else {
      ptr = new_ptr;
  }
  ```

---

## 🛠 **How to Run These Programs**

1. Open a terminal or IDE (like Code::Blocks, Visual Studio Code, or GCC).  
2. Compile the program:  
   ```bash
   gcc program_name.c -o program_name
   ```
3. Run the compiled program:  
   ```bash
   ./program_name
   ```

---

This README introduces **Dynamic Memory Allocation in C**, covering core memory functions like `malloc`, `calloc`, `realloc`, and `free`, along with dynamic arrays and structures. Proper memory management is essential for creating efficient and error-free programs. Happy coding! 🚀
