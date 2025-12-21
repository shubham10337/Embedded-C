# 📘 Variables in Embedded C (FastBit Aligned)

## 1. What Are Variables? (Course Definition)

As explained in the course:

> Variables are **identifiers for data**.

Data in a program is stored in **computer memory**, and a variable:
- Acts as a **label** to a memory location
- Helps the programmer access stored data easily

Important point stressed in the lecture:
> Variable names do NOT exist in memory after compilation.  
> Only memory addresses exist.

---

## 2. Variables and Memory (Core Concept)

- Memory consists of many locations
- Each memory location has:
  - An **address**
  - A **value**

When you write:
```c
int myData;
````

The compiler:

* Reserves memory
* Associates a memory address with `myData`

Internally, the program works only with **addresses**, not names.

---

## 3. Variable Definition

### What Is Variable Definition?

Variable definition means:

* Informing the compiler to **allocate memory**
* Declaring the data type and name

Syntax:

```c
<data_type> <variable_name>;
```

Example:

```c
char myExamScore;
```

This statement:

* Reserves 1 byte of memory
* Names that memory location as `myExamScore`

---

## 4. Variable Initialization

### What Is Initialization?

Initialization means:

* Assigning an initial value to a variable

Example:

```c
myExamScore = 25;
```

Important rule from the course:

> A variable must be **defined before it is initialized**.

---

## 5. Illegal Order (Compiler Error Example)

This order is **NOT allowed**:

```c
myExamScore = 25;
char myExamScore;
```

Reason:

* Compiler sees usage before definition
* Memory has not been allocated yet

---

## 6. Definition + Initialization Together

The course also explains that:

* Definition and initialization can be done in one statement

Example:

```c
char myExamScore = 25;
```

This is:

* Legal
* Preferred
* Clean

---

## 7. Rules for Naming Variables

As listed in the lecture:

* Variable name can contain:

  * Alphabets (A–Z, a–z)
  * Digits (0–9)
  * Underscore (`_`)
* Variable name **cannot start with a digit**
* No spaces allowed
* C keywords **cannot** be used as variable names
* Variable name length should not exceed **30 characters**

---

## 8. C Reserved Keywords

The course highlights that:

* C language has reserved keywords
* These keywords have special meaning
* They cannot be used as variable names

Examples:

* `int`
* `char`
* `return`
* `if`
* `while`

---

## 9. Variable Declaration vs Definition (Very Important)

### Variable Definition

* Memory is allocated
* Variable comes into existence

### Variable Declaration

* Compiler is informed about variable
* Memory may NOT be allocated

Key statement from the course:

> All definitions are declarations,
> but all declarations are not definitions.

This concept becomes critical in **multi-file programs**.

---

## 10. Address of a Variable

Every variable has an address in memory.

You can access it using the **address-of operator (`&`)**.

Example:

```c
int myData;
&myData;
```

This returns:

* The memory address where `myData` is stored

The course uses this to introduce **pointers later**.

---

## 11. Variable Scope (Introduction)

Scope defines:

* Where a variable is accessible

Two basic scopes introduced here:

* **Local variables**
* **Global variables**

(Detailed discussion comes later in storage classes.)

---

## 12. Lifetime of Variables (Basic Idea)

The course briefly mentions:

* Local variables:

  * Exist only inside a function
  * Destroyed when function exits
* Global variables:

  * Exist for entire program execution

This concept becomes important when using:

* Functions
* Static variables
* Multi-file projects

---

## 13. Embedded Perspective (Course Emphasis)

In embedded systems:

* Variables directly consume RAM
* Careless variable usage leads to:

  * Memory waste
  * Unexpected behavior

Rule emphasized:

> Always define variables consciously.

---

## 14. Common Beginner Mistakes (As Highlighted)

* Using variable before definition
* Assuming default values for local variables
* Using wrong data type
* Giving meaningless variable names

---

## 15. Key Takeaways (FastBit Revision Style)

* Variables are labels for memory
* Definition allocates memory
* Initialization assigns value
* Order matters
* Naming rules must be followed
* Scope and lifetime affect behavior

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the slide showing
> “variable name does not exist post-compilation, only address exists”,
> you are recalling the correct lecture.

