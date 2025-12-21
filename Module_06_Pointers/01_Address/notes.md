# 📘 Address of Variables & Introduction to Pointers
## 1. Why Pointers Are Important in Embedded C (Course Context)

As explained in the course:

> In embedded systems, software interacts directly with **memory**.

To work with memory effectively, we must understand:
- Memory addresses
- How data is stored
- How to access data using addresses

Pointers are the mechanism provided by C to work with **memory addresses**.

---

## 2. Memory and Address (Recall Concept)

Memory is a collection of:
- Locations
- Each location has a **unique address**
- Each address stores some **data**

When we create a variable:
```c
int a = 10;
````

The compiler:

* Reserves memory
* Stores value `10`
* Assigns an address to variable `a`

---

## 3. Variable Name vs Memory Address

Important statement from the lecture:

> Variable names are only for programmers.
> The system works only with memory addresses.

Internally:

* CPU does not know variable names
* CPU accesses data using addresses

---

## 4. Address-of Operator (`&`)

The **address-of operator (`&`)** is used to:

* Get the memory address of a variable

Example:

```c
int a = 10;
& a;
```

This returns:

* The address where `a` is stored in memory

---

## 5. Printing Address of a Variable

Example shown in the course:

```c
int a = 10;
printf("%p", &a);
```

Key points explained:

* `%p` is used to print addresses
* Address is usually shown in hexadecimal format

---

## 6. What Is a Pointer? (Course Definition)

As defined in the course:

> A pointer is a variable that stores the **address of another variable**.

So:

* Normal variable → stores data
* Pointer variable → stores address

---

## 7. Declaring a Pointer Variable

Syntax:

```c
data_type *pointer_name;
```

Example:

```c
int *p;
```

Explanation:

* `p` is a pointer
* It can store the address of an `int` variable

---

## 8. Pointer Assignment

Assigning address of a variable to a pointer:

```c
int a = 10;
int *p;

p = &a;
```

Now:

* `p` holds address of `a`
* `p` points to `a`

Course emphasis:

> Pointer type must match the data type of variable it points to.

---

## 9. Why Pointer Has a Data Type

The course stresses:

> Pointer data type tells the compiler
> how many bytes to read/write from memory.

Example:

* `int *p` → access memory as `int`
* `char *p` → access memory as `char`

This becomes critical in pointer arithmetic (later topic).

---

## 10. Accessing Value Using Pointer (Dereferencing)

The **dereference operator (`*`)** is used to:

* Access the value stored at the address held by pointer

Example:

```c
int a = 10;
int *p = &a;

*p;
```

* `p` → address of `a`
* `*p` → value of `a`

---

## 11. Pointer Example (Course Style)

```c
int a = 10;
int *p;

p = &a;

printf("Value of a = %d\n", a);
printf("Address of a = %p\n", &a);
printf("Value of p = %p\n", p);
printf("Value pointed by p = %d\n", *p);
```

This example is used to clearly distinguish:

* Variable
* Address
* Pointer
* Dereferenced value

---

## 12. Common Beginner Confusions (As Highlighted)

* Confusing `*` in declaration vs dereferencing
* Forgetting to initialize pointer
* Assuming pointer stores value instead of address
* Using wrong format specifier

These mistakes lead to:

* Undefined behavior
* Program crashes

---

## 13. Embedded Perspective (Course Emphasis)

In embedded systems:

* Pointers are used to:

  * Access memory locations
  * Pass data efficiently
  * Interface with hardware (later)

Hence:

> Understanding pointers is **non-negotiable** for embedded developers.

---

## 14. Key Takeaways

* Memory has addresses
* `&` gives address of variable
* Pointer stores address
* Pointer has a data type
* `*` dereferences pointer
* Correct usage is critical

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the instructor writing
> `int *p = &a;` and asking
> “What does `p` store?”,
> you’re recalling the correct lecture.
