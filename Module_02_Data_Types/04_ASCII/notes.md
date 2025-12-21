
# 📘 ASCII Codes & Characters in C
## 1. Why ASCII Is Important in Embedded C

In C, **characters are stored as numbers**.

As explained in the course:
> For the machine, everything is a number.

Understanding ASCII is essential because:
- Input/output deals with characters
- Serial communication sends characters
- Characters are internally integers

---

## 2. What Is ASCII?

**ASCII** stands for:
> American Standard Code for Information Interchange

It is a standard that assigns **numeric values** to characters.

Key points from the lecture:
- ASCII uses **7 bits**
- Can represent **128 characters**
- Stored using `char` data type (1 byte)

---

## 3. ASCII Character Set (Course View)

ASCII includes:
- Alphabets (A–Z, a–z)
- Digits (0–9)
- Special characters (`@`, `#`, `$`, etc.)
- Control characters (newline, carriage return)

Examples:
- `'A'` → 65
- `'a'` → 97
- `'0'` → 48

---

## 4. Characters as Integers (Very Important)

In C:
- `char` is an **integer data type**
- A character literal is stored as its ASCII value

Example:
```c
char ch = 'A';
````

Internally:

* `'A'` → 65
* `ch` stores the value `65`

This explains why:

```c
printf("%d", ch);
```

prints `65`.

---

## 5. Example Explained in the Course

String:

```
Apple :)
```

Stored internally as:

```
65 112 112 108 101 32 58 41
```

Each character is converted into its **ASCII numeric value**.

This slide is used in the course to reinforce:

> Characters are just numbers.

---

## 6. ASCII Codes and `char` Range

Since ASCII needs only 7 bits:

* It fits comfortably inside `char` (1 byte)

Signed `char` range:

* `-128` to `+127`

Unsigned `char` range:

* `0` to `255`

ASCII values fall within:

* `0` to `127`

So `char` is sufficient for ASCII storage.

---

## 7. Reading Characters from Keyboard

The course introduces character input using:

### `scanf("%c", &var);`

Example:

```c
char c;
scanf("%c", &c);
```

* Reads **one character**
* Stores ASCII value into `c`

---

## 8. `getchar()` Function (Course Explanation)

The `getchar()` function:

* Reads **one character**
* Returns an `int`
* Represents ASCII value of key pressed

Example:

```c
int a;
a = getchar();
```

Important points highlighted:

* Program waits until a key is pressed
* The returned value is ASCII code

---

## 9. Difference Between `'\n'` and `'\r'`

This is a **direct FastBit lecture topic**.

### `\n` (New Line)

* Moves cursor to the **next line vertically**

### `\r` (Carriage Return)

* Moves cursor to the **beginning of the same line horizontally**

This is demonstrated using output examples in the course.

---

## 10. Escape Sequences (Mentioned in Lecture)

Common escape sequences:

* `\n` → New line
* `\r` → Carriage return
* `\t` → Tab
* `\\` → Backslash

These are used inside string literals.

---

## 11. ASCII and Embedded Systems (Course Emphasis)

In embedded systems:

* UART communication sends ASCII characters
* Debug messages use ASCII
* Keyboard/sensor input often maps to ASCII

Hence:

> Understanding ASCII is mandatory for embedded developers.

---

## 12. Common Beginner Mistakes (As Highlighted)

* Treating `char` as special character type (it is integer)
* Forgetting ASCII conversion
* Confusing character `'1'` with number `1`

  * `'1'` → ASCII 49
  * `1` → numeric value

---

## 13. Key Takeaways

* ASCII maps characters to numbers
* `char` stores ASCII values
* Characters are integers internally
* `getchar()` returns ASCII value
* Escape sequences affect cursor movement

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the slide showing
> “Apple :) → 65 112 112 108 101 58 41”,
> you’re recalling the correct lecture.
