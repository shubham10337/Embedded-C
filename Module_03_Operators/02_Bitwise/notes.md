# 📘 Bitwise Operators in C

## 1. Why Bitwise Operators Are Important in Embedded C

As emphasized in the course:

> Embedded systems work at the **bit level**.

Bitwise operators allow us to:
- Manipulate individual bits
- Pack multiple flags into a variable
- Work efficiently with hardware-related data

Even before touching registers, understanding bitwise operators is **mandatory**.

---

## 2. What Are Bitwise Operators?

Bitwise operators perform operations **bit by bit** on integer data.

They do NOT work on:
- Floating-point numbers
- Strings

They work only on **integer types** such as:
- `char`
- `int`
- `short`
- `long`

---

## 3. Bitwise Operators Explained in the Course

| Operator | Name | Description |
|--------|------|-------------|
| `&` | Bitwise AND | AND operation on each bit |
| `|` | Bitwise OR | OR operation on each bit |
| `^` | Bitwise XOR | XOR operation on each bit |
| `~` | Bitwise NOT | One’s complement |
| `<<` | Left Shift | Shift bits to the left |
| `>>` | Right Shift | Shift bits to the right |

---

## 4. Bitwise AND (`&`)

The AND operator compares each bit:
- Result bit is `1` only if **both bits are 1**

Example:
```

A = 00001010
B = 00001100
------------

A & B = 00001000

````

In C:
```c
int a = 10;
int b = 12;
int c = a & b;
````

Result:

* `c = 8`

---

## 5. Bitwise OR (`|`)

The OR operator:

* Result bit is `1` if **any one bit is 1**

Example:

```
A = 00001010
B = 00001100
--------------
A | B = 00001110
```

In C:

```c
int a = 10;
int b = 12;
int c = a | b;
```

Result:

* `c = 14`

---

## 6. Bitwise XOR (`^`)

The XOR operator:

* Result bit is `1` if bits are **different**

Example:

```
A = 00001010
B = 00001100
--------------
A ^ B = 00000110
```

In C:

```c
int a = 10;
int b = 12;
int c = a ^ b;
```

Result:

* `c = 6`

Course highlight:

> XOR is useful when bits need to be toggled.

---

## 7. Bitwise NOT (`~`)

The NOT operator:

* Inverts all bits
* Converts `1` → `0` and `0` → `1`

Example (8-bit view):

```
A = 00001010
~A = 11110101
```

In C:

```c
int a = 10;
int b = ~a;
```

Important point from the lecture:

> Result depends on the **size of the data type**.

---

## 8. Left Shift Operator (`<<`)

Left shift:

* Shifts bits to the left
* Fills rightmost bits with `0`

Example:

```
00001010 << 1 = 00010100
```

In C:

```c
int a = 10;
int b = a << 1;
```

Result:

* `b = 20`

Course explanation:

> Left shift by 1 is equivalent to multiplication by 2.

---

## 9. Right Shift Operator (`>>`)

Right shift:

* Shifts bits to the right

Example:

```
00001010 >> 1 = 00000101
```

In C:

```c
int a = 10;
int b = a >> 1;
```

Result:

* `b = 5`

Note mentioned in the course:

* Behavior depends on **signed vs unsigned**

---

## 10. Bitwise Operators vs Arithmetic Operators

The course clarifies:

* Bitwise operators work on **binary representation**
* Arithmetic operators work on **numeric values**

Example:

```c
10 / 2 = 5
10 >> 1 = 5
```

Result same, but **operation is different internally**.

---

## 11. Embedded Perspective (Course Emphasis)

In embedded systems, bitwise operators are used for:

* Masking bits
* Checking flags
* Controlling configuration values

Before touching registers, this foundation is required.

---

## 12. Common Beginner Mistakes (As Highlighted)

* Confusing `&` with `&&`
* Confusing `|` with `||`
* Using bitwise operators on floating-point values
* Ignoring signed vs unsigned behavior

These mistakes cause **logic bugs**, not compiler errors.

---

## 13. Key Takeaways (FastBit Revision Style)

* Bitwise operators work at bit level
* They operate only on integers
* `&`, `|`, `^`, `~`, `<<`, `>>` are core operators
* Shifts can multiply/divide by powers of 2
* Signedness matters

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the slide where
> `10 & 12 = 8` is shown in binary,
> you’re recalling the correct lecture.
