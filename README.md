# Onegin: Efficient Text Sorting Engine

A high-performance utility designed to process and sort large text files (specifically "Eugene Onegin" by A.S. Pushkin) using custom sorting algorithms and advanced memory management.

## 🧠 Key Features
*   **Custom Comparator:** Implements a specialized "rhyme sort" that ignores punctuation and sorts strings from the end to the beginning.
*   **Memory Efficiency:** The entire file is read into a single buffer. An array of pointers (structs) is used to reference individual lines, avoiding expensive string copying.
*   **Buffer Pre-processing:** Replaces newline characters with null-terminators (`\0`) to allow standard C-string functions to work directly on the main buffer.
*   **Multiple Sort Modes:**
    1.  Standard alphabetical sort (from the beginning).
    2.  Rhyme-based sort (from the end of the line).
    3.  Original text restoration (using the original buffer).

## 🛡 Robustness & Safety
*   **Dynamic Memory:** All allocated memory is carefully tracked and freed, verified with **Valgrind** to ensure zero memory leaks.
*   **Custom `qsort`:** Includes an implementation of a sorting algorithm (or a custom wrapper for `qsort`) that handles pointers to structures.

## 🚀 Compilation & Usage
Requires `gcc` and `make`.

```bash
# 1. Build the project
make

# 2. Run the sorter
./onegin input.txt output.txt
```

## 🛠 Tech Stack
*   **Language:** C
*   **Concepts:** Pointer arithmetic, String manipulation, `qsort`.
