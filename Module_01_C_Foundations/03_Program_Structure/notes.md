# 📘 Program Structure in Embedded C

## 1. Why Program Structure Matters in Embedded Systems

In desktop programming, the OS hides most details.
In embedded systems, **nothing is hidden**.

Understanding program structure means understanding:
- How execution really starts
- What runs before `main()`
- Why infinite loops exist
- How firmware controls hardware deterministically

A misunderstanding here leads to:
- Startup bugs
- Hard faults
- Devices that “do nothing” after flashing

---

## 2. Typical Embedded Program Flow (High Level)

```

Power ON / Reset
↓
Startup Code
↓
Memory Initialization
↓
main()
↓
Infinite Loop

````

Unlike desktop programs:
- There is **no program exit**
- `main()` never returns
- The firmware runs as long as power exists

---

## 3. What Really Happens Before `main()`

### 3.1 Reset Vector

When the MCU powers up:
- CPU jumps to a **fixed memory address**
- This address contains the **Reset Handler**
- This is NOT your `main()` function

This code is usually written in:
- Assembly
- Or compiler-provided startup files

---

## 4. Startup Code Responsibilities

Startup code performs **critical low-level tasks**:

1. Set stack pointer
2. Initialize `.data` section
3. Zero-initialize `.bss` section
4. Configure system clock (sometimes)
5. Call `main()`

> If startup code fails, `main()` is never reached.

---

## 5. Memory Sections (Embedded Perspective)

| Section | Purpose |
|------|--------|
| `.text` | Program code (Flash) |
| `.data` | Initialized global/static variables |
| `.bss` | Uninitialized global/static variables |
| Stack | Function calls, local variables |
| Heap | Dynamic memory (often avoided) |

Example:
```c
int global_var = 10;   // .data
int uninit_var;       // .bss
````

---

## 6. The `main()` Function in Embedded C

### 6.1 Standard Signature

```c
int main(void)
{
    while (1)
    {
        // application code
    }
}
```

Key points:

* No command-line arguments
* Return value is irrelevant
* Execution never exits

### 6.2 Why `main()` Never Returns

In embedded systems:

* There is no parent process
* No OS to return status to
* Returning from `main()` leads to undefined behavior

Hence:

```c
while(1);
```

is **intentional and mandatory**.

---

## 7. Hardware Initialization Phase

A clean embedded program separates:

* **Initialization**
* **Execution**

Example:

```c
int main(void)
{
    hardware_init();
    peripheral_init();

    while (1)
    {
        application_task();
    }
}
```

This structure improves:

* Readability
* Debugging
* Scalability

---

## 8. Infinite Loop (Super Loop Architecture)

Most embedded systems use a **super loop**.

Characteristics:

* Deterministic execution
* Simple scheduling
* No preemption (unless interrupts used)

Example:

```c
while (1)
{
    read_sensor();
    process_data();
    update_output();
}
```

This loop **is the firmware**.

---

## 9. Role of Interrupts in Program Structure

Interrupts run **outside** the main loop.

* Main loop handles background tasks
* Interrupts handle time-critical events

Example:

```c
void TIM_IRQHandler(void)
{
    // interrupt service routine
}
```

Program structure must ensure:

* Shared data is protected
* Execution remains predictable

---

## 10. Difference from Desktop Program Structure

| Aspect           | Desktop C | Embedded C    |
| ---------------- | --------- | ------------- |
| Entry            | OS loader | Reset handler |
| Startup          | Hidden    | Explicit      |
| main() exit      | Allowed   | Forbidden     |
| Loop             | Optional  | Mandatory     |
| Hardware control | Indirect  | Direct        |

---

## 11. Common Beginner Mistakes

❌ Writing code after `main()` return
❌ Assuming OS services exist
❌ No infinite loop
❌ Mixing initialization and logic
❌ Ignoring startup behavior

These cause **silent failures**.

---

## 12. Best Practices for Embedded Program Structure

* Keep `main()` simple
* Separate init and logic
* Use infinite loop consciously
* Understand startup code role
* Never assume OS support

---

## 13. What Comes Next

Before touching peripherals or registers, you must understand:

* Compilation process
* Linking
* Memory layout control

That is covered next.

---

## 📚 Reputable References

1. ARM Cortex-M Software Development Guide
   [https://developer.arm.com/documentation](https://developer.arm.com/documentation)

2. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

3. Embedded Systems — IEEE Overview
   [https://ieeexplore.ieee.org](https://ieeexplore.ieee.org)

4. GNU Toolchain Documentation
   [https://gcc.gnu.org/onlinedocs/](https://gcc.gnu.org/onlinedocs/)

5. Startup Code & Reset Handler (ARM)
   [https://developer.arm.com/documentation/dui0553/latest](https://developer.arm.com/documentation/dui0553/latest)

---

> ⚠️ **Embedded Truth:**
> If you don’t know what runs before `main()`,
> you don’t fully control your firmware.
