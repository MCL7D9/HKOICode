scrabbleD403:
Well this is a really frustrating problem...
# Bug Report: Confusing Loop Skipping When Mixing `scanf()` and For-Loops in C

## 1. Overview

A program that reads a string and a count, then iterates over the string in a `for`-loop, behaves correctly when using `fgets()` but mysteriously skips the loop entirely when using two back-to-back `scanf()` calls. This report explains why.

---

## 2. Symptoms

- **Working version:**  
  ```c
  fgets(word, sizeof(word), stdin);
  for (int i = 0; word[i] != '\0'; i++) {
      // loop body runs as expected  
  }
  scanf("%d", &num);
  ```
  All debug prints inside the loop appear.

- **Broken version:**  
  ```c
  scanf("%s", word);
  scanf("%hd", &num);
  for (char i = 0; word[i] != '\0'; i++) {
      // debug prints here never show up  
  }
  ```
  The loop body never executes on the Online Judge, even though `word` printed correctly earlier.

---

## 3. Root Causes

1. **Format specifier mismatch and buffer corruption**  
   - `num` is declared as `char` but read with `%hd` (expects `short *`).  
   - `scanf("%hd", &num)` writes two bytes into a one-byte storage plus an adjacent byte, corrupting nearby data (often the start of `chara[]` or internal padding).  
   - As a result, memory holding the string’s terminator or loop counter may be clobbered, causing the loop condition to be false immediately.

2. **Leftover newline in the input buffer**  
   - `scanf("%s", word)` stops at the first whitespace but does **not** consume the trailing `'\n'`.  
   - A subsequent `scanf("%d", &num)` would normally skip whitespace, but combined with the wrong type (`%hd` → `char`), it can fail or leave the buffer in an inconsistent state.

3. **Buffered stdout and missing newlines**  
   - Debug `printf("EXEC");` without `\n` stays in the user-level buffer.  
   - If the program crashes or exits abnormally (due to memory corruption), buffered output may never flush, making it _appear_ as if the loop never ran.

---

## 4. Demonstration of Memory Corruption

```c
char word[11], num = 0, chara[26] = {0};

// Memory layout (simplified):
// [ word bytes ... ][ num ][ chara[0] ][ chara[1] ] ...

scanf("%s", word);
// Input: "HELLO\n"
// word = "HELLO\0"; '\n' remains in stdin

scanf("%hd", &num);
// `%hd` writes 2 bytes: one into `num`, one into `chara[0]`
// chara[0] corrupted → next loop uses bad data
```

---

## 5. Why the Loop “Disappears”

- **Loop condition check:**  
  ```c
  for (char i = 0; word[i] != '\0'; i++) { … }
  ```
  If the null terminator in `word` was inadvertently overwritten by the bad `scanf()`, `word[0]` may already be `'\0'`, so the loop never starts.

- **Silent failure of debug prints:**  
  Due to memory corruption or immediate exit after error, any prints without a newline may never flush, hiding evidence.

---

## 6. Recommended Fixes

1. **Match types and format specifiers**  
   ```c
   int num;
   scanf("%s", word);
   scanf("%d", &num);
   ```

2. **Clear stray newline**  
   ```c
   scanf("%s", word);
   while (getchar() != '\n');
   scanf("%d", &num);
   ```

3. **Prefer buffered input**  
   ```c
   char buf[32];
   fgets(buf, sizeof(buf), stdin);
   sscanf(buf, "%s", word);
   fgets(buf, sizeof(buf), stdin);
   sscanf(buf, "%d", &num);
   ```

---

## 7. Conclusion

Mixing mismatched `scanf` specifiers, stray newlines, and unflushed output creates undefined behavior that can silently skip entire loops. Correcting the type/format mismatch and using line-oriented input (or manual buffer clearing) restores predictable control flow.
