# **Structures in C**

Structures allow us to group variables of different data types under a single name, making it easier to model complex entities. In C, structures are a powerful tool for managing data efficiently and improving code organization. This folder covers the basics and practical applications of structures in C programming.

---

## 🚀 **Topics Covered**

1. **Defining Structures**  
   A structure is a custom data type that allows grouping variables of different types. For example, a student structure could hold a name (string), roll number (integer), and CGPA (float).  
   **Syntax**:  
   ```c
   struct student {
       char name[100];
       int roll;
       float cgpa;
   };
   ```

2. **Nested Structures**  
   You can define structures inside other structures to model more complex data. This allows creating hierarchical relationships between entities.  
   **Example**:  
   ```c
   struct address {
       char city[50];
       char street[100];
   };
   struct student {
       char name[100];
       int roll;
       struct address addr;  // Nested structure
   };
   ```

3. **Structures and Functions**  
   Structures can be passed to functions, both by value and by reference (using pointers). Passing by reference avoids copying the entire structure, especially for large data.  
   **Example**:  
   ```c
   void printStudentInfo(struct student s1) {
       printf("Name: %s, Roll No: %d, CGPA: %.2f", s1.name, s1.roll, s1.cgpa);
   }
   ```

4. **Array of Structures**  
   You can create an array of structures to manage multiple instances of similar data. For example, an array of `student` structures can hold details of several students.  
   **Example**:  
   ```c
   struct student students[100];
   students[0].roll = 101;  // Accessing the first student's roll number
   ```

---

## 📂 **Programs Included**

| **Program Name**                 | **Description**                                                   |
|----------------------------------|-------------------------------------------------------------------|
| `basic_structures.c`             | Demonstrates defining and using structures.                      |
| `nested_structures.c`            | Shows how to create and use nested structures.                   |
| `structures_and_functions.c`     | Passing structures as arguments to functions.                    |
| `array_of_structures.c`          | Using arrays to store multiple structures.                       |

---

## 🌟 **Quick Tips**

- Structures are defined using the keyword `struct`.
- Access the members of a structure using the `.` operator.  
  **Example**:  
  ```c
  s1.roll = 100;  // Accessing the roll number of student s1
  ```
- To pass large structures to functions, use pointers to avoid copying overhead.  
  **Example**:  
  ```c
  void printStudentInfo(struct student *s) {
      printf("%s, %d", s->name, s->roll);  // Using arrow operator to access members
  }
  ```

- The `typedef` keyword can be used to create a type alias for structures, simplifying the declaration and usage.  
  **Example**:  
  ```c
  typedef struct {
      char name[100];
      int roll;
      float cgpa;
  } student;
  
  student s1;  // Using typedef to create an alias
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
