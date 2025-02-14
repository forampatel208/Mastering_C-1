# **File Handling in C**

File handling allows programs to create, read, write, and manage data stored in files. By using file handling in C, one can work with files in various formats, manage large datasets, and save data between program runs. This folder covers basic file operations like opening, closing, reading, writing, and appending data to files.

---

## 🚀 **Topics Covered**

1. **Opening and Closing Files**  
   Files need to be opened before performing any operations. The `fopen` function is used to open a file in a specified mode, while `fclose` is used to close the file once operations are complete.  

2. **Reading and Writing**  
   After opening a file, you can read or write data using functions like `fscanf`, `fprintf`, `fgetc`, and `fputc`.  

3. **Copying Files**  
   You can copy the contents of one file to another. This involves opening both the source and destination files, reading data from the source, and writing it to the destination.  

4. **Appending to Files**  
   You can add data to an existing file without overwriting it by using the append mode (`"a"`). This is useful for log files or adding new records to a file.  
---

## 📂 **Programs Included**

| **Program Name**            | **Description**                                                       |
|-----------------------------|-----------------------------------------------------------------------|
| `file_open_close.c`         | Demonstrates how to open and close files.                             |
| `file_read_write.c`         | Illustrates reading and writing data to files.                        |
| `file_copy.c`               | Copies content from one file to another.                              |
| `appending_files.c`         | Appends data to an existing file.                                     |

---

## 🌟 **Quick Tips**

- Always check if a file was successfully opened using the return value of `fopen`. If the file pointer is `NULL`, the file didn't open correctly.  
  **Example**:  
  ```c
  if (fptr == NULL) {
      printf("Error opening the file.\n");
  }
  ```

- Use file modes carefully to avoid accidental overwriting of data. For example, `"w"` overwrites the existing file, while `"a"` appends to the file.  
  **File Modes**:  
  - `"r"`: Open for reading
  - `"w"`: Open for writing (creates a new file or overwrites an existing one)
  - `"a"`: Open for appending
  - `"rb"`, `"wb"`, `"ab"`: Binary file modes

- Always close a file after operations using `fclose` to ensure all data is saved and resources are freed.  
  **Example**:  
  ```c
  fclose(fptr);
  ```

- The `EOF` (End Of File) constant is returned by `fgetc` to indicate the end of a file. It's important to check for `EOF` to stop reading once the file has been fully read.  
  **Example**:  
  ```c
  while ((ch = fgetc(fptr)) != EOF) {
      // Process each character
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
