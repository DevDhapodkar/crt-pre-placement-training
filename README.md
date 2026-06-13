# Campus Recruitment Training (CRT) - Pre-Placement Prep (Semester VI)

Welcome to the **CRT Pre-Placement Training** repository. This repository compiles code implementations, algorithms, and object-oriented concepts built during the Semester VI pre-placement training sessions. The code is structured across multiple modules in C (primarily focusing on Data Structures & Algorithms) and Java (focusing on Object-Oriented Programming principles).

---

## 📂 Repository Structure

The repository is organized day-wise for Data Structures and topic-wise for Object-Oriented Programming concepts:

```plaintext
├── Day 1, 25th May, 2026 (Data Structures)/    # Basic constructs, control flow, loops & TCS questions in C
├── Day 2, 26th May, 2026 (Data Structures)/    # Arrays, basic search, and pattern programs in C
├── Day 3, 27th May, 2026 (Data Structures)/    # Search and Sort algorithms in C
├── Day 5, 29th May, 2026 (Data Structures)/    # Linked lists, reverse LL, structures, and string operations in C
├── Abstraction/                                # Abstract classes, abstract methods & dynamic method dispatch in Java
├── Classes and Objects/                        # Java OOP basics: Main and Student classes
├── Exception Handling/                         # Try-catch blocks and ArithmeticException handling in Java
├── Inheretance/                                # Inheritance principles and implementation in Java
├── Polymorphism/                               # Shapes hierarchy (Shape, Circle, Rectangle, Triangle) in Java
├── Polymorphism1/                              # Method overloading & overriding examples in Java
└── NagpurJavaProject/                          # Practice exercises on Strings, Arrays, and core Java concepts
```

---

## 💻 Day-Wise Coverage

### 🔹 [Day 1: Basics & Logic Building](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Day%201,%2025th%20May,%202026%20(Data%20Structures))
Focuses on basic logic building, loop constructs, conditional branches, and competitive coding patterns in C:
* **Control Flow & Loops:** `1-10(for loop).c`, `table of 2.c`, `if-else example.c`, and nested loop patterns.
* **Basic Operations:** Variables swapping (`swap using 2 var.c`, `swap using 3 var.c`).
* **Competitive Questions:** `tcs que.c` (logic-based questions asked in TCS Ninja/Digital exams).

### 🔹 [Day 2: Array Operations & Patterns](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Day%202,%2026th%20May,%202026%20(Data%20Structures))
Advanced array manipulation and custom patterns in C:
* **Array Search & Stats:** Finding the greatest element (`greatest element arr.c`), second greatest (`second greatest.c`), and linear search (`linear search.c`).
* **Visual Logic:** Nested pattern programs (`pyramid.c`).

### 🔹 [Day 3: Searching & Sorting Algorithms](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Day%203,%2027th%20May,%202026%20(Data%20Structures))
Classic algorithm implementations in C:
* **Search:** Binary search (`binary search.c`) and flag-based linear search (`linear search flag.c`).
* **Sort:** Bubble Sort (`bubble sort.c`) for numerical sorting.

### 🔹 [Day 5: Linked Lists, Structures & String Parsing](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Day%205,%2029th%20May,%202026%20(Data%20Structures))
Advanced Data Structures and string manipulation in C:
* **Data Structures:** Custom Structs (`structures.c`), Singly Linked List operations (`linked lists.c`, `linked lists op.c`), and Reversing a Linked List (`reverse LL.c`).
* **String Processing:** Vowel counts (`count total vowels.c`), finding word boundaries (`return smallest word.c`, `return largest word in a string.c`), and palindrome verification (`check if palindrome.c`).
* **Logical Challenges:** LeetCode-style arrays (`majority element.c`, `leet prob1.c`).

---

## ☕ Java Object-Oriented Programming (OOP)

The Java modules focus on the core pillars of Object-Oriented Programming:

### 1. [Classes and Objects](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/classes%20and%20objects)
* Shows how to instantiate classes, define fields, encapsulate variables, and create object instances (`Student.java` & `Main.java`).

### 2. [Inheritance](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Inheretance)
* Shows Parent-Child relationship (`A.java`, `B.java`) and utilizing base methods with single inheritance (`SingleInheretanceMain.java`).

### 3. [Polymorphism & Polymorphism1](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/polymorphism)
* **Compile-Time Polymorphism:** Method overloading (`Addition.java`, `MethodOverloadingMain.java`).
* **Runtime Polymorphism:** Dynamic method dispatch and overriding (`methodOverridingMain1.java`). Shows a geometric shapes hierarchy using class `Shape` overridden by `Circle`, `Rectangle`, and `Triangle`.

### 4. [Nagpur Java Project](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/NagpurJavaProject)
* Standard implementation problems utilizing core JDK libraries for String formatting, array parsing, and constructor overloading.

### 5. [Abstraction](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Abstraction)
* Explores abstract classes and methods, reference variables of abstract classes, and dynamic method dispatch using an `Animal` base class with concrete `Goat` and `Tiger` subclasses.

### 6. [Exception Handling](file:///Users/devdhapodkar/Desktop/Desk/Sem%20VI/CRT%20Pre-Placement%20Training/Exception%20Handling)
* Implements robust exception handling using `try-catch` blocks and showcases catching standard run-time exceptions like `ArithmeticException` (`Example1.java`).

---

## 🚀 Setup & Execution

### Compile C Programs
To compile and run any of the C files, navigate to the target directory and use standard `gcc`:
```bash
# Compile
gcc "filename.c" -o program

# Execute
./program
```

### Compile Java Files
To run Java files, compile the target files using `javac` and execute using `java`:
```bash
# Compile
javac Main.java Student.java

# Run
java Main
```
