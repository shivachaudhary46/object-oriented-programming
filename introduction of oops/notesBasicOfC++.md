# Basics of C++ Programming  

## Introduction  
- C++ is a **general-purpose, compiled, case-sensitive** programming language.  
- It was Developed by **Bjarne Stroustrup** in **1979 at Bell Labs**.  
- It also Supports **procedural, object-oriented, and generic programming**.  

## Uses C++?  
- Combines **efficiency** of C with **object-oriented features**.  
- Used in **game development, system software, and embedded systems**. 
- Used to develop high performance system software such as **Mysql, Windows XP, Adobe products**
- Used to write applications in sensitive sectors such as **banking, military**.

## Differences Between C and C++  
| Feature | C | C++ |  
|---------|----|----|  
| Programming Paradigm | Procedural programming | Procedural programming + OOP |  
| Code Reusability | Low | High due to(Classes, Inheritance) |  
| Memory Management | Manual | Supports RAII |  
| compilation | faster | slower |
| libraries | fewer libraries and keywords than c++ | improved and extendeed libraries |

## My first c++ program
```cpp
#include <iostream>  
using namespace std;  
int main() {  
    cout << "Hello, World!";  
    return 0;  
}
```

## C++ Program Structure
```cpp
// first cpp program   //comment 
#include<iostream>      //preprocessor directive
using namespace std;     //which namespace
int main()              // beginning of function named main
{                       //begining pf block for main
cout << "Hello World!";     //ouput statement and string literal
return 0;                   //send 0 to operating system
}
```

## Data Types   
- **Primitive Types:** int, char, float, double, bool  
- **Derived Types:** Arrays, Pointers, Functions  
- **User-defined Types:** Structures, Classes, Enums  

## Tokens
- The smallest individual unit iin program is known as Tokens.
- c++ has the following tokens:
    * Keywords
    * Identifiers
    * Constants
    * Operators
    * Special symbols
  
### 1. Keywords
- Keywords are the reserved words for special purpose and must not be Used as 
    normal identifier names
- Following table list are the c++ keywords:

| keywords |    |    |    |     |     |     | Newer Keywords |
|---------|----|----|----|----|----|----|-------------|
| asm | continue | float | new | signed | try | using |
| auto | default | for | operator | sizeof | typedef | namespace |
| break | delete | Friend | private | static | union | bal　|
| case | do | goto | protected | struct | unsigned | static_cast |
| catch | double | if | public | switch | virtual | const_cast |
| char | else | inline | register | template | void | dynamic_cast |
| class | enum | int | return | this | volatile | true |
| const | extern | long | short | throw | while | false |

## Variables and Constants  
- **Variables:** Store data of specific types.  
  ```cpp
  int age = 25;
  ```  
- **Constants:** Immutable values which cannot be changed 
  ```cpp
  const float PI = 3.14;
  ```  

## Operators in C++  
| Type | Example | Description |  
|------|---------|------------|  
| Arithmetic | `+`, `-`, `*`, `/`, `%` | Basic Math |  
| Relational | `==`, `!=`, `>`, `<` | Compare values |  
| Logical | `&&`, `||`, `!` | Boolean Logic |  
| Assignment | `=`, `+=`, `-=` | Assign values |  
| Bitwise | `&`, `|`, `^` | Manipulate bits |  

## Input and Output in C++  
- Uses **cin** (input) and **cout** (output).  
```cpp
int age;  
cout << "Enter age: ";  
cin >> age;  
cout << "You entered: " << age;
```
- Another example:
```cpp
#include<iostream>
using namespace std;
int main(){
    int a, b, c;

    cout << "enter two integers :";
    cin >> a >> b;

    //sum the two value and stored in variable
    c = a + b;

    cout << a << " + " << b << " = " <<c<<endl;

    return 0;
}
```

## Control Statements  
### a) If-Else Statement  
```cpp
if (x > 0) cout << "Positive";  
else cout << "Negative";
```

### b) Switch Case  
```cpp
switch (x) {  
    case 1: cout << "One"; break;  
    default: cout << "Other";  
}
```

## 11. Loops in C++  
### a) For Loop  
```cpp
for (int i = 0; i < 5; i++) {  
    cout << i << " ";  
}
```
### b) While Loop  
```cpp
while (x > 0) {  
    x--;  
}
```
### c) Do-While Loop  
```cpp
do {  
    x--;  
} while (x > 0);
```

## 12. Jump Statements  
- **Break:** Exit loop early.  
- **Continue:** Skip to next iteration.  
- **Return:** Exit function.  

## 13. Functions in C++  
- **User-defined functions** improve code reusability.  
```cpp
int add(int a, int b) { return a + b; }
```

## 14. Function Overloading  
- Multiple functions with same name but different parameters.  
```cpp
int add(int a, int b);  
float add(float x, float y);
```

## 15. Recursion  
- A function that calls itself.  
```cpp
int factorial(int n) {  
    return (n == 1) ? 1 : n * factorial(n - 1);  
}
```

## 16. Arrays  
- Collection of elements of same type.  
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

## 17. Strings in C++  
- C++ supports **C-style strings** and **string class**.  
```cpp
string name = "Alice";
```

## 18. Pointers  
- Store memory addresses.  
```cpp
int x = 10;  
int *ptr = &x;
```

## 19. Dynamic Memory Allocation  
- **new:** Allocate memory.  
- **delete:** Free memory.  
```cpp
int *p = new int(5);  
delete p;
```

## 20. Structures  
- Group related data.  
```cpp
struct Student {  
    string name;  
    int age;  
};
```

## 21. Classes and Objects  
```cpp
class Car {  
public:  
    string brand;  
};
Car myCar;
```

## 22. Access Specifiers  
- **Public:** Accessible everywhere.  
- **Private:** Accessible only within class.  
- **Protected:** Accessible in derived classes.

## 23. Constructors  
```cpp
class Car {  
    Car() { cout << "Car created"; }  
};
```

## 24. Destructors  
- Cleanup code when object is deleted.  
```cpp
~Car() { cout << "Car destroyed"; }
```

## 25. Inheritance  
- Derived class inherits from base class.  
```cpp
class Car : public Vehicle {};
```

## 26. Polymorphism  
- Function Overloading  
- Function Overriding  

## 27. Abstract Classes  
- Contain **pure virtual functions**.  
```cpp
class Animal { virtual void makeSound() = 0; };
```

## 28. Namespaces  
- Prevents naming conflicts.  
```cpp
namespace MyNamespace { int x; }
```

## 29. Exception Handling  
- Uses `try`, `catch`, `throw`.  
```cpp
try { throw 10; } catch (int e) { cout << "Error"; }
```

## 30. File Handling  
- Uses `fstream` library.  
```cpp
ofstream file("test.txt");  
file << "Hello!";
```

## 31. Standard Template Library (STL)  
- Includes **vector, map, set, queue**.  
```cpp
vector<int> v = {1, 2, 3};
```

## 32. Iterators  
- Used for **traversing containers**.  

## 33. Lambda Expressions  
```cpp
auto add = [](int a, int b) { return a + b; };
```

## 34. Smart Pointers  
- **Unique_ptr, Shared_ptr, Weak_ptr**.  

## 35. Bit Manipulation  
- Efficient operations on bits.  

## 36. Multithreading  
- Uses `thread` library.  

## 37. Operator Overloading  
```cpp
class Complex { Complex operator+(Complex obj); };
```

## 38. Preprocessor Directives  
- `#include, #define, #ifdef`.  

## 39. Scope Resolution Operator `::`  
```cpp
class A { static int x; };  
int A::x = 5;
```

## 40. Typecasting  
- **Implicit and Explicit conversion**.  

## 41. Function Templates  
```cpp
template <typename T> T add(T a, T b);
```

## 42. Macros  
```cpp
#define PI 3.14
```

## 43. Encapsulation  
- Wrapping data in a class.  

## 44. Friend Functions  
- Access private members of a class.  

## 45. Multi-level Inheritance  
- Class B → Class C → Class D.  

## 46. Virtual Functions  
- Supports **runtime polymorphism**.  

## 47. File I/O Streams  
- `ifstream`, `ofstream`.  

## 48. Command Line Arguments  
- Accessed via `argv[]`.  

## 49. Debugging Techniques  
- **GDB, Breakpoints, Logging**.  

## 50. Best Practices  
- **Use RAII, Avoid Memory Leaks, Write Modular Code**.  
```

This Markdown file summarizes **50 key topics** from the **Basics of C++ Programming** in a structured way. Let me know if you need any modifications! 🚀