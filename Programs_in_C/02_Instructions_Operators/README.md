# Operators in C

This folder dives into the world of **Operators in C**, essential tools for performing operations on data and controlling the flow of a program.
---

## 🚀 Topics Covered

### Arithmetic Operators
Perform basic mathematical calculations:
- **Addition** (`+`)
- **Subtraction** (`-`)
- **Multiplication** (`*`)
- **Division** (`/`)
- **Modulus** (`%`) - Returns the remainder of a division operation.

### Relational Operators
Used to compare values to determine their relationships:
- **Equal to** (`==`)
- **Not equal to** (`!=`)
- **Greater than** (`>`)
- **Less than** (`<`)
- **Greater than or equal to** (`>=`)
- **Less than or equal to** (`<=`)

### Logical Operators
Combine or negate conditions logically:
- **Logical AND** (`&&`) - True if both conditions are true.
- **Logical OR** (`||`) - True if at least one condition is true.
- **Logical NOT** (`!`) - Negates a condition.

### Bitwise Operators
Operate at the binary level, enabling low-level manipulation:
- **Bitwise AND** (`&`)
- **Bitwise OR** (`|`)
- **Bitwise XOR** (`^`)
- **Bitwise Complement** (`~`)
- **Left Shift** (`<<`)
- **Right Shift** (`>>`)

### Assignment Operators
Simplify expressions by combining operations with assignment:
- **Assignment** (`=`)
- **Add and assign** (`+=`)
- **Subtract and assign** (`-=`)
- **Multiply and assign** (`*=`)
- **Divide and assign** (`/=`)
- **Modulus and assign** (`%=`)

---

## 📊 Operator Precedence and Associativity

In C, operators are evaluated based on their precedence and associativity. Here is a simplified precedence table:

| Precedence | Operators                              | Associativity |
|------------|----------------------------------------|---------------|
| Highest    | `()` (Parentheses), `++`, `--`         | Left to Right |
|            | `*`, `/`, `%`                         | Left to Right |
|            | `+`, `-`                              | Left to Right |
|            | `<`, `<=`, `>`, `>=`                  | Left to Right |
|            | `==`, `!=`                            | Left to Right |
|            | `&&`                                  | Left to Right |
|            | `||`                                  | Left to Right |
| Lowest     | `=`, `+=`, `-=`, `*=`, `/=`, `%=`      | Right to Left |

> **Tip:** Use parentheses `()` to explicitly specify the order of evaluation and avoid confusion.

---

## 📂 Programs Included

| Program Name              | Description                                                                 |
|---------------------------|-----------------------------------------------------------------------------|
| `arithmetic_operators.c`  | Demonstrates basic arithmetic operations like `+`, `-`, `*`, `/`, `%`.      |
| `relational_operators.c`  | Examples of relational comparisons using `==`, `!=`, `>`, `<`, `>=`, `<=`. |
| `logical_operators.c`     | Shows logical operations using `&&`, `||`, and `!`.                        |
| `bitwise_operators.c`     | Introduces bit-level operations like `&`, `|`, `^`, `~`, `<<`, `>>`.       |
| `assignment_operators.c`  | Explains shorthand operators like `+=`, `-=`, `*=`, `/=`, `%=`.            |

---

## 🌟 Quick Tips

1. **Arithmetic Operators:**
   - Operations follow precedence rules: multiplication/division take precedence over addition/subtraction.
   - Use parentheses to control the order of evaluation.

2. **Relational and Logical Operators:**
   - Commonly used in control flow structures like `if-else`, `while`, and `for` loops.
   - Combine multiple conditions using logical operators (`&&`, `||`) for complex decisions.

3. **Bitwise Operators:**
   - Start with small binary values to understand their behavior.
   - Useful in scenarios like masking, toggling bits, and low-level data manipulation.

4. **Assignment Operators:**
   - Simplify repetitive calculations and assignments, making your code cleaner.

---

## 🛠 How to Run These Programs

1. Open a terminal or IDE supporting C programming (e.g., GCC, Visual Studio Code, or Code::Blocks).
2. Compile the program using the following command:
   ```bash
   gcc program_name.c -o program_name
   ```
3. Run the compiled program:
   ```bash
   ./program_name
   ```

---

## 📖 Additional Resources

- [Operator Precedence in C (GeeksforGeeks)](https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/)
