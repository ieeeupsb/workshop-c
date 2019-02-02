class: center, middle

# Workshop C

---

# Why learn C

## History

- Developed by Dennis Ritchie between 1969 and 1973
- **Imperative** programming language: built of statements
- **Procedural**: Every program has **one or more** functions

---

# Why learn C

- **Flexible** and **simple**
- Step up from assembly language => **Performance**
	- Assembly is a human readable way to write machine code which the CPU understands
- **Portability** (write once, compile for several architectures)
- Several languages are based on C: C++, C#, Objective-C, Java, ...

---

# Programming in C

## Workflow

1. **Editing**: The act of creating and modifying the source code
2. **Compiling**: Compiler is a piece of software. Responsible to convert the source code into machine language
	- Compiler is also responsible to detect errors
	- It outputs _object code_ in _object files_ (typically files with `.o` or `.obj` extensions)
3. **Linking**: Also a piece of software. It merges the object modules.
	- Let's say the you compile files `A.c` and `B.c` resulting in `A.o` and `B.o`
	- From `A.c` you intend to use code from `B.c`
	- The linker takes the required object code from `B.o` and injects in `A.o`
4. **Running and tetsing**: The last step. You might need some tissue papers!

---

name: hello-world-snippet

# Hello World

## Example

```C
#include <stdio.h>

int main() {
*	printf("Hello World\n");
}
```

---

template:  hello-world-snippet

- Every program has a `main` function call. A function has:
	- A name (e.g. `main`)
	- A return type (e.g. `int` which means integer numbers). This is the final function result
	- A set of statements between curly braces `{ ... }`
	- A parameter list, after function name. In this case is empty `()`
	- There's more. We will cover functions later
- `main` is the program's entry point, i.e., the first function called when the program starts

---

template: hello-world-snippet

- Inside `main` function statements
	- There's a single statement
	- It's a function call to `printf` function
	- This function is defined in a standard `library`
	- It displays messages on the console. In this case it will print `Hello World`

- The first line is a preprocessing directive
	- It's telling where to find some definitions
	- In this case it's needed for the `printf` function
	- It's defined in `stdio.h` library

---

# Hello World

## The C language standards

---

class: center, middle

# Introduction to C

ahahah
