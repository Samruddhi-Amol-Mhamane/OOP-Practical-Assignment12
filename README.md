# Practical 12: Type Casting in C++

## Problem Statement
To implement and demonstrate the four C++ casting operators: `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`.

## Objectives
- To understand type casting in C++.
- To study the four casting operators.
- To demonstrate type conversion using a C++ program.
- To understand the purpose of each casting operator.

## Expected Learning Outcomes
- Understand the concept of type casting.
- Identify the four casting operators.
- Perform explicit type conversion in C++.
- Understand casting with pointers and inheritance.

## Theory / Concept

Type casting is the process of converting one data type into another. C++ provides four casting operators:

1. **`static_cast`** – Performs explicit conversions, such as converting a `double` to an `int`.
2. **`dynamic_cast`** – Performs runtime-checked conversions in a polymorphic inheritance hierarchy.
3. **`const_cast`** – Adds or removes `const` or `volatile` qualifiers.
4. **`reinterpret_cast`** – Performs certain low-level conversions, including supported pointer conversions.

## Algorithm
1. Start the program.
2. Use `static_cast` to convert a floating-point value into an integer.
3. Use `dynamic_cast` to convert a base-class pointer to a derived-class pointer.
4. Use `const_cast` with an originally non-constant integer.
5. Use `reinterpret_cast` to convert an integer pointer to a character pointer.
6. Display the results.
7. Stop the program.

## Technology / Tools Used
- **Programming Language:** C++
- **IDE:** Dev-C++
- **Library:** `<iostream>`

## Implementation
The source code is available in [`type_casting.cpp`](type_casting.cpp).

## Sample Output

```text
Static Cast: 10
Dynamic Cast: Successful
Derived class
Const Cast: 80
Reinterpret Cast: Pointer converted
Value through original pointer: 100
```

## Test Cases

| Test Case | Operation | Expected Result |
|---|---|---|
| 1 | `static_cast` | Converts `10.75` to `10` |
| 2 | `dynamic_cast` | Successfully converts the valid pointer |
| 3 | `const_cast` | Updates the originally non-constant integer to `80` |
| 4 | `reinterpret_cast` | Converts the pointer type |

## Results / Observations
- `static_cast` performs explicit type conversion.
- `dynamic_cast` supports runtime-checked downcasting.
- `const_cast` changes the cv-qualification of a pointer or reference.
- `reinterpret_cast` performs certain low-level conversions and must be used carefully.

## Conclusion
This practical demonstrates the four casting operators in C++ and explains their purposes in numeric conversion, inheritance, qualification changes, and low-level pointer conversion.

## Assignment Questions

**Q1. What is type casting?**

Type casting is the process of converting a value or expression from one data type to another.

**Q2. Name the four casting operators in C++.**

`static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`.

**Q3. What is the difference between `static_cast` and `dynamic_cast`?**

`static_cast` performs compile-time conversions, while `dynamic_cast` performs runtime-checked conversions within a suitable polymorphic inheritance hierarchy.

## Student Details
- **Name:** Samruddhi Amol Mhamane
- **PRN:** 202501110050
- **Division:** A
- **Batch:** A2
- **Faculty:** Khushal Khairnar Sir
