# Polymorphism-REPO

#### AIM -
## To study polymorphism-overloading.

# Theory

## Constructor Overloading
- **Definition**: Constructor overloading is a feature in C++ that allows a class to have more than one constructor, each with a different parameter list.  
- **Purpose**: It enables the creation of objects in different ways, depending on the number or type of arguments passed.  
- **Key Points**:
  - Constructors share the same name as the class.
  - The compiler differentiates between constructors based on the parameter list (number or type of parameters).
  - Helps in flexibility and readability of object creation.  

---

## Function Overloading
- **Definition**: Function overloading is the ability to define multiple functions with the same name but different parameter lists.  
- **Purpose**: It allows functions to perform similar tasks with different types or numbers of inputs.  
- **Key Points**:
  - Return type alone cannot be used to overload functions; parameter list must differ.
  - Improves code clarity by reusing the same function name for related operations.
  - The compiler decides which version of the function to call at compile time (compile-time polymorphism).  

---

## Operator Overloading
- **Definition**: Operator overloading allows programmers to redefine the meaning of C++ operators (like +, -, *, ==, etc.) for user-defined types (e.g., classes).  
- **Purpose**: It enables objects of a class to be manipulated using operators in a natural and intuitive way.  
- **Key Points**:
  - Achieved by defining a special function using the keyword `operator`.
  - Provides readability and ease of use for custom data types (e.g., complex numbers, matrices).
  - Only existing operators can be overloaded; new operators cannot be created.
  - Certain operators (like `::`, `sizeof`, `?:`) cannot be overloaded.  

# Difference Between Constructor Overloading, Function Overloading, and Operator Overloading

| Feature                | Constructor Overloading | Function Overloading | Operator Overloading |
|-------------------------|-------------------------|----------------------|-----------------------|
| **Definition**          | Multiple constructors with different parameter lists in the same class. | Multiple functions with the same name but different parameter lists. | Redefining the meaning of operators for user-defined types. |
| **Purpose**             | To allow creating objects in different ways. | To perform similar operations with different types or numbers of inputs. | To make operators work with objects in an intuitive way. |
| **Where it is Used**    | Inside a class (constructors only). | Inside or outside classes (any functions). | With user-defined types (classes/structs). |
| **Compile-time Decision** | Yes, decided at compile time (which constructor to call). | Yes, decided at compile time (which function to call). | Yes, decided at compile time (which operator function to call). |
| **Return Type Dependency** | Not applicable (constructors have no return type). | Cannot overload functions by return type alone. | Return type can be specified, but operator choice depends on parameters. |
| **Example Use Case**    | Initializing objects in multiple ways. | Performing addition with different data types (int, float, etc.). | Adding two complex numbers using `+`. |

# Algorithms for C++ Codes

## 1. Addition Using Constructor Overloading
**Algorithm:**
1. Start.
2. Define a class `Add` with a private variable `sum`.
3. Create a constructor with three integer parameters:
   - Add the numbers and assign to `sum`.
   - Print the sum as a double.
4. Create another constructor with two integer parameters:
   - Add the numbers and assign to `sum`.
   - Print the sum as an integer.
5. In `main()`, create two objects:
   - One with three integers.
   - One with two integers.
6. End.

---

## 2. Name Printing Using Constructor Overloading
**Algorithm:**
1. Start.
2. Define a class `Name`.
3. Create a constructor with two `char` parameters:
   - Print both characters together.
4. Create another constructor with two `string` parameters:
   - Concatenate and print the strings.
5. In `main()`, create two objects:
   - One with two characters.
   - One with two strings.
6. End.

---

## 3. Calculator Using Function Overloading
**Algorithm:**
1. Start.
2. Define a function `calc(int, int)`:
   - Add the two numbers.
   - Print the sum.
3. Define another function `calc(int, int, int)`:
   - Subtract the second and third numbers from the first.
   - Print the difference.
4. In `main()`, call:
   - `calc(10,20)` for addition.
   - `calc(20,10,5)` for subtraction.
5. End.

---

## 4. Complex Number Addition
**Algorithm:**
1. Start.
2. Define a class `ComplexAddition` with two public integers: `real` and `imag`.
3. Create a constructor to initialize real and imaginary parts:
   - Print the complex number.
4. Define a method `add(int, int)`:
   - Print the sum of real and imaginary values as a complex number.
5. In `main()`:
   - Create two objects with given real and imaginary parts.
   - Add their real parts and imaginary parts separately.
   - Call the `add` function to display the result.
6. End.

---

## 5. String Concatenation Using Constructor and Method
**Algorithm:**
1. Start.
2. Define a class `Name` with two public string variables.
3. Create a constructor with two string parameters:
   - Assign values to `name1` and `name2`.
4. Define a method `add()`:
   - Concatenate `name1` and `name2`.
   - Print the result.
5. In `main()`, create an object with two strings.
6. Call the `add()` method to display concatenated string.
7. End.

# Conclusion

Constructor overloading, function overloading, and operator overloading are all important features of C++ that support **compile-time polymorphism**.  
- **Constructor overloading** provides flexibility in object creation.  
- **Function overloading** enhances code readability by allowing the same function name to handle different inputs.  
- **Operator overloading** makes user-defined types behave like built-in types, improving usability and clarity.  

Together, these concepts make programs more **flexible, readable, and intuitive**, while demonstrating the power of **object-oriented programming in C++**.

