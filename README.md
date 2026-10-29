# C++ & Java — OOP Concepts, Linked Lists & Practice

Personal practice repository covering Object-Oriented Programming in **C++** and **Java**, linked list implementations, and general C++ problem solving.

## Structure

### `oops_c++/` — OOP in C++
| File | Concept |
|------|---------|
| `basics.cpp` | Classes, objects, access modifiers, getters/setters |
| `encapulation.cpp` | Encapsulation (data hiding) |
| `absctraction.cpp` | Abstraction (implementation hiding) |
| `inheritance.cpp` | Single inheritance |
| `multiLevelInheritance.cpp` | Multi-level inheritance |
| `multipulInheritence.cpp` | Multiple inheritance |
| `hierarchicalInheritance.cpp` | Hierarchical inheritance |
| `inheritanceAmbiguity.cpp` | Inheritance ambiguity & scope resolution |
| `compile_time_polymorphisum.cpp` | Compile-time (static) polymorphism — overloading |
| `run_time_polymorphisum.cpp` | Run-time (dynamic) polymorphism — overriding |
| `regain.cpp` | Revision — linked list with classes |

### `oops_c++/JAVA/` — OOP in Java
| File | Concept |
|------|---------|
| `basic_of_JAVA.java` | Java basics — data types, input, control flow |
| `class_and_objects.java` | Classes and objects |
| `inheritance_in_java.java` | Inheritance |
| `abstraction_in_java.java` | Abstract classes |
| `interfaces.java` | Interfaces |
| `interface_inheritance.java` | Interface inheritance |
| `innerClass.java` | Inner / nested / local classes |
| `association.java`, `Student.java` | Association (has-a relationship) |

### `linked_list/` — Linked Lists in C++
Singly, doubly and circular linked list implementations, plus practice versions.

### `cpp_practic/` — C++ Practice
Binary search, constructors, pointers, hashing, number conversions, Fibonacci, palindrome, primes and interview-style questions.

## Running

**C++**
```bash
g++ oops_c++/inheritance.cpp -o inheritance && ./inheritance
```

**Java** (several files declare multiple top-level classes; compile into a separate output dir)
```bash
javac -d out oops_c++/JAVA/interfaces.java && java -cp out <MainClassName>
```
