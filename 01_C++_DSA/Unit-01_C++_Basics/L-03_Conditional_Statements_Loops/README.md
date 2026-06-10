# L-03: Conditional Statements & Loops

## ⚡ Quick Revision Notes

| Concept | Key Point | Code Example |
| --- | --- | --- |
| **if-else** | Condition true/false check karta hai | `if(age>=18) {...} else {...}` |
| **else if Ladder** | Multiple conditions check karne ke liye | `if() {...} else if() {...}` |
| **while Loop** | Jab tak condition true, chalta rahega | `while(i<=5) {i++;}` |
| **Infinite Loop** | Condition hamesha true, loop rukta nahi | `while(true) {...}` |
| **do-while Loop** | Pehle run karo, baad me condition check | `do {...} while(i<=5);` |
| **for Loop** | init, condition, update ek line me | `for(int i=1; i<=5; i++)` |
| **break Statement** | Loop ko turant tod deta hai | `if(i==3) break;` |
| **continue** | Current iteration skip karta hai | `if(i==3) continue;` |
| **Ternary Operator** | if-else ka shortcut, ek line me | `n>=0 ? "Positive" : "Negative"` |
| **switch Statement** | Value ke hisaab se case chalata hai | `switch(grade) {case 'A': ...}` |
| **Nested Loops** | Loop ke andar loop | `for() { for() {...} }` |
| **Guard Clause** | Edge cases pehle handle karo | `if(n<=1) return 0;` |

## 📁 All Code Files

1. **[Positive Negative Check](./codes/L03_01_positive_negative.cpp)** - if-else se number positive ya negative check karo
2. **[Voting Eligibility](./codes/L03_02_voting_eligibility.cpp)** - Age >= 18 hai to vote kar sakta hai
3. **[Even Odd Check](./codes/L03_03_even_odd.cpp)** - `n%2==0` se even-odd check
4. **[Positive Zero Negative](./codes/L03_04_positive_zero_negative.cpp)** - if-else if ladder se 3 condition check
5. **[Grading System](./codes/L03_05_grading_system.cpp)** - Marks ke hisaab se A/B/C grade
6. **[Upper Lower Char](./codes/L03_06_upper_lower_char.cpp)** - Character uppercase hai ya lowercase
7. **[While Loop 1 to 5](./codes/L03_07_while_loop_1_to_5.cpp)** - while loop se 1 se 5 print
8. **[Infinite Loop Example](./codes/L03_08_infinite_loop_example.cpp)** - `while(true)` ka example
9. **[Do While Loop](./codes/L03_09_do_while_loop.cpp)** - do-while se 1 se 5 print
10. **[Sum 1 to n While Loop](./codes/L03_10_sum_odd_1_to_n_with_while_loop.cpp)** - while loop se odd numbers ka sum
11. **[Sum Even 1 to n While](./codes/L03_11_sum_even_1_to_n_with_while_loop.cpp)** - while loop se even numbers ka sum
12. **[Sum 1 to n While](./codes/L03_12_sum_1_to_n_with_while_loop.cpp)** - while loop se 1 to n sum
13. **[For Loop 1 to 5](./codes/L03_13_for_loop_1_to_5.cpp)** - for loop ka basic example
14. **[Break Statement Sum](./codes/L03_14_break_statement_sum.cpp)** - break se loop todna
15. **[Sum Odd 1 to n v1](./codes/L03_15_sum_odd_1_to_n_v1.cpp)** - for loop `i+=2` se odd sum
16. **[Sum Odd 1 to n v2](./codes/L03_16_sum_odd_1_to_n_v2.cpp)** - for loop + `if(i%2!=0)` se odd sum
17. **[Sum Even 1 to n](./codes/L03_17_sum_even_1_to_n.cpp)** - for loop se even numbers ka sum
18. **[Sum 1 to n](./codes/L03_18_sum_1_to_n.cpp)** - for loop se 1 to n sum
19. **[Ternary Statement](./codes/L03_19_ternary_statement.cpp)** - `?:` operator se positive/negative
20. **[Switch Statement](./codes/L03_20_switch_statement.cpp)** - switch-case se grade check
21. **[Prime Composite](./codes/L03_21_prime_composite.cpp)** - Number prime hai ya composite
22. **[Nested Loops](./codes/L03_22_nested_loops.cpp)** - Pattern printing stars se
23. **[Sum Div by 3 For](./codes/L03_23_sum_div_by_3_for.cpp)** - for loop se 3 se divisible numbers ka sum
24. **[Sum Div by 3 While](./codes/L03_24_sum_div_by_3_while.cpp)** - while loop se 3 se divisible numbers ka sum
25. **[Factorial](./codes/L03_25_factorial.cpp)** - for loop se N ka factorial

## 🖼️ Notes Images - Fast Revision

### 1. if-else Basics
![if-else Basics](./images/L03_01_if_else_basics.png)

### 2. else if Ladder
![else if Ladder](./images/L03_02_else_if_ladder.png)

### 3. while Loop
![while Loop](./images/L03_03_while_loop.png)

### 4. Infinite Loop
![Infinite Loop](./images/L03_04_infinite_loop.png)

### 5. do while Loop
![do while Loop](./images/L03_05_do_while_loop.png)

### 6. Practice Problems while Loop
![Practice Problems while Loop](./images/L03_06_practice_problems_while_loop.png)

### 7. for Loop
![for Loop](./images/L03_07_for_loop.png)

### 8. break Statement
![break Statement](./images/L03_08_break_statement.png)

### 9. for Loop Practice
![for Loop Practice](./images/L03_09_for_loop_practice.png)

### 10. Ternary Statement
![Ternary Statement](./images/L03_10_ternary_statement.png)

### 11. Switch Statement
![Switch Statement](./images/L03_11_switch_statement.png)

### 12. Prime or Composite
![Prime or Composite](./images/L03_12_prime_composite.png)

### 13. Nested Loops
![Nested Loops](./images/L03_13_nested_loops.png)

### 14. Sum Divisible by 3
![Sum Divisible by 3](./images/L03_14_sum_divisible_by_3.png)

### 15. Factorial
![Factorial](./images/L03_15_factorial.png)

## ⚙️ How to Run
Code file se code copy karo, VS Code me paste karke Run karo.

---
**Next:** [L-04: Patterns](../L-04_Patterns)
