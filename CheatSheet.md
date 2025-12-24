
# Embedded C Quick Cheatsheet (FastBit-Oriented)

> Purpose:  
> Open this file when stuck during embedded C coding → quick recall → resume work.

---

## 1. Integer Data Types (Embedded View)

| Data Type | Size (Bytes) | Range | Embedded Use Case |
|----------|-------------|-------|-------------------|
| char | 1 | -128 to 127 | ASCII, small signed data |
| unsigned char | 1 | 0 to 255 | Sensors, flags, registers |
| short | 2 | -32,768 to 32,767 | Small counters |
| unsigned short | 2 | 0 to 65,535 | ADC values |
| int | 2 or 4 | Compiler dependent | Avoid for portability |
| unsigned int | 2 or 4 | Compiler dependent | Avoid in drivers |
| long | 4 or 8 | Compiler dependent | MCU dependent |
| long long | 8 | Fixed | Large counters |

**Tip (Memory Hook):**  
> `char`, `short`, `long long` → fixed  
> `int`, `long` → compiler trap ⚠️

---

## 2. Fixed-Width Types (`stdint.h`) — **USE THIS**

| Type | Size | Why in Embedded |
|----|----|----------------|
| uint8_t | 1 byte | Exact register mapping |
| int8_t | 1 byte | Signed sensor data |
| uint16_t | 2 bytes | ADC, timers |
| uint32_t | 4 bytes | Addresses, counters |
| uint64_t | 8 bytes | Rare, heavy |

**Rule:**  
> Portable embedded code = `stdint.h` only

---

## 3. Format Specifiers (printf / scanf)

| Data Type | printf | scanf |
|---------|--------|-------|
| char | %c | %c |
| signed int | %d | %d |
| unsigned int | %u | %u |
| short | %hd | %hd |
| unsigned short | %hu | %hu |
| long | %ld | %ld |
| unsigned long | %lu | %lu |
| long long | %lld | %lld |
| unsigned long long | %llu | %llu |

**Embedded Warning:**  
> Wrong specifier = garbage output or hard fault

---

## 4. Variables & Memory Lifetime

| Variable Type | Scope | Lifetime | Default |
|-------------|------|---------|--------|
| Local | Function | Until return | Garbage |
| Global | Whole program | Program end | 0 |
| static local | Function only | Program end | 0 |
| static global | File only | Program end | 0 |

**Mnemonic:**  
> Local dies, Static survives

---

## 5. Storage Classes (Critical for Embedded)

### `static`
| Usage | Effect |
|-----|-------|
| Inside function | Value retained between calls |
| Global | File-level visibility |

**Use Case:**  
> Preserve state machine variables

### `extern`
| Purpose |
|-------|
| Access global variable across files |

**Rule:**  
> Define once, `extern` everywhere else

---

## 6. Pointer Essentials (Embedded Survival)

### Pointer Facts
| Property | Value |
|-------|------|
| Pointer size | 8 bytes (64-bit host) |
| Controlled by | CPU architecture |
| NOT controlled by | Pointer data type |

### Pointer Type Effect
| Pointer Type | Read Size |
|------------|----------|
| char* | 1 byte |
| int* | 4 bytes |
| long long* | 8 bytes |

**Golden Rule:**  
> Pointer type decides **how much**, not **where**

---

## 7. Pointer Operators

| Operator | Meaning |
|--------|--------|
| & | Address of |
| * | Value at address |

```c
char data = 10;
char *p = &data;
*p = 20;   // writes to data
````

---

## 8. Pointer Arithmetic (Very Important)

| Pointer Type | p + 1 jumps |
| ------------ | ----------- |
| char*        | +1 byte     |
| int*         | +4 bytes    |
| long long*   | +8 bytes    |

**Bug Pattern:**

> Wrong pointer type → wrong memory read/write

---

## 9. Address Storage & Casting

| Scenario                  | Required      |
| ------------------------- | ------------- |
| Store address in variable | Cast needed   |
| Pointer → integer         | Explicit cast |
| Integer → pointer         | Dangerous ⚠️  |

```c
unsigned long addr = (unsigned long)&var;
```

---

## 10. `scanf` / `getchar` Rules

| Function | Needs `&`? | Notes            |
| -------- | ---------- | ---------------- |
| scanf    | YES        | Writes to memory |
| getchar  | NO         | Returns ASCII    |

**Buffer Trap:**

> `scanf` leaves `\n` → next input breaks

---

## 11. ASCII Facts (Embedded Relevant)

| Fact        | Value  |
| ----------- | ------ |
| ASCII bits  | 7      |
| ASCII range | 0–127  |
| char stores | Number |

**Memory Hook:**

> `'A'` = 65

---

## 12. sizeof Operator

| Usage        | Notes              |
| ------------ | ------------------ |
| sizeof(type) | Compile-time       |
| sizeof(var)  | Compiler dependent |

**Rule:**

> Always verify size on target MCU

---

## 13. Common Embedded Bugs → Fix

| Symptom          | Root Cause         | Fix            |
| ---------------- | ------------------ | -------------- |
| Value resets     | Local variable     | Use static     |
| Garbage print    | Wrong format       | Fix specifier  |
| Corrupt memory   | Wrong pointer type | Fix pointer    |
| Overflow         | Wrong data type    | Use uintX_t    |
| Multi-file error | Missing extern     | Declare extern |

---

## 14. Long-Term Memory Anchors

* **“Pointer size is fixed, pointer behavior is typed”**
* **“Local dies, static lives”**
* **“uint8_t beats unsigned char”**
* **“Wrong format specifier = silent bug”**
* **“If it touches hardware, use fixed-width types”**

---

## 15. Embedded Coding Checklist (Before Debugging)

* [ ] Correct data type?
* [ ] Correct pointer type?
* [ ] Correct storage class?
* [ ] Correct format specifier?
* [ ] Fixed-width integer used?
* [ ] Buffer cleaned?
