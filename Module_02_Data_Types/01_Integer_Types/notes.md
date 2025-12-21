# 📘 C Data Types in Embedded Systems

## 1. Why Data Types Matter in Embedded C

In Embedded C, **data types decide memory usage**.

Unlike desktop systems:
- Memory is limited
- Every byte matters
- Wrong data type choice can waste RAM or cause overflow

As explained in the course:
> Before storing any value, the programmer must decide the **type of data**.

---

## 2. What Is a Data Type?

A **data type** tells the compiler:
- What kind of data a variable will store
- How much memory should be allocated
- What range of values is allowed

Example:
```c
char a;
int b;
````

Here:

* `char` → 1 byte
* `int` → depends on compiler

---

## 3. Representing Real-World Data

The course explains that real-world data can be represented as:

* Numbers

  * Integer values
  * Real (floating-point) values
* Characters
* Strings (collection of characters)

### Examples from the lecture:

* Age → integer
* Temperature → real number
* Grade → character

---

## 4. Classification of C Data Types (Course View)

Based on usage, C data types are broadly classified as:

### 1️⃣ Integer data types

### 2️⃣ Floating-point data types

In this module, we focus on **integer data types**.

---

## 5. Integer Data Types (Signed)

Signed integer data types can store:

* Positive values
* Negative values

### Types explained in the course:

* `char`
* `short int`
* `int`
* `long int`
* `long long int`

Notes:

* `short int` → can be written as `short`
* `long int` → can be written as `long`
* `long long int` → can be written as `long long`

---

## 6. Integer Data Types (Unsigned)

Unsigned data types store **only positive values (including zero)**.

Unsigned versions:

* `unsigned char`
* `unsigned short int`
* `unsigned int`
* `unsigned long int`
* `unsigned long long int`

Key idea from the course:

> If a value is never negative, **unsigned data types are preferred**.

---

## 7. Size of Integer Data Types (Important Concept)

The C standard **does not fix exact sizes** for all data types.

Sizes depend on:

* Compiler
* Target architecture

### Guaranteed sizes (as explained):

| Data Type | Guaranteed Size |
| --------- | --------------- |
| char      | 1 byte          |
| short     | 2 bytes         |
| long long | 8 bytes         |

Other types like `int` and `long`:

* May vary between compilers

---

## 8. `char` Data Type (Very Important)

### Properties:

* Smallest integer data type
* Consumes **1 byte**
* Can store:

  * ASCII characters
  * Small integer values

### Signed `char`:

* Range: **-128 to +127**

### Unsigned `char`:

* Range: **0 to 255**

Key statement from the course:

> There is no special meaning for `char`.
> It is just another integer data type.

---

## 9. Signed Data Representation (Course Explanation)

For signed data:

* MSB (Most Significant Bit) represents the sign
* Remaining bits represent magnitude
* Negative values use **2’s complement**

Example:

* `-25` stored in 1 byte → `0xE7`
* `+25` stored in 1 byte → `0x19`

This explains **why signed ranges are asymmetric**.

---

## 10. Unsigned Data Representation

For unsigned data:

* No sign bit
* All bits represent magnitude

1 byte unsigned range:

* Minimum: `0`
* Maximum: `255`

This is why unsigned types are used when:

* Value is always positive
* Full range is needed

---

## 11. Choosing the Right Data Type (Course Logic)

### Example 1: City Temperature

City X temperature:

* Never negative
* Never above 40°C

Correct choice:

```c
unsigned char cityXTemperature;
```

Why?

* Value fits within 0–255
* Saves memory

---

### Example 2: Sun’s Temperature

Sun’s surface temperature ≈ 5500°C

Wrong choice:

```c
unsigned char temp;   // insufficient range
```

Correct choice:

```c
unsigned short sunTemperature;
```

---

## 12. Variable Definition and Initialization

### Variable Definition:

```c
unsigned char cityXTemperature;
```

### Variable Initialization:

```c
cityXTemperature = 25;
```

Definition must happen **before usage**.

Illegal order (as shown in course):

```c
cityXTemperature = 25;
unsigned char cityXTemperature;
```

---

## 13. `sizeof` Operator

The `sizeof` operator is used to:

* Find size of a variable or data type
* Understand compiler behavior

Example:

```c
sizeof(int);
sizeof(char);
```

Important note:

> Output of `sizeof` may vary across compilers.

---

## 14. Embedded Perspective (Course Emphasis)

In embedded systems:

* Data type choice affects:

  * RAM usage
  * Performance
  * Correctness

Rule reinforced in the course:

> Never assume size. Always verify.

---

## 15. Key Takeaways

* Data types define memory usage
* Signed vs unsigned matters
* `char` is an integer data type
* Sizes can be compiler-dependent
* Choose data types based on real-world constraints

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember examples like
> “City temperature” and “Sun temperature”,
> you’re recalling the correct lecture.
