# Stack-Implementation-using-Array
# Aim:

To study and implement Stack implementation using Array with menu options:
1. Push
2. Pop
3. Display
4. Exit

# Apparatus / Software Required:
vs code.

# Theory:
A stack is a linear data structure in which insertion and deletion of elements take place from only one end, called the top.
It follows the LIFO (Last In First Out) principle:
The element inserted last is the first one to be removed.

# Operations in Stack:

1. Push: Inserting an element into the stack (at the top).


2. Pop: Removing an element from the stack (from the top).


3. Display: Showing the current elements of the stack.

In array implementation of stack, a pointer variable top is used to keep track of the last inserted element.

# Applications of Stack:

1. Used in CPU for managing function calls (call stack).


2. Used in expression evaluation and syntax parsing.


3. Used in undo/redo operations in editors.


4. Used in backtracking algorithms.

# Algorithms:

1. Start
 
2. Define Stack class with:
Data members: top, ar[size]
Member functions: push(), pop(), peak(), disp()

3. Push Operation:
If top == size-1, display "Stack Overflow".
Else increment top and insert element at ar[top].

4. Pop Operation:
If top == -1, display "Stack Underflow".
Else return ar[top] and decrement top.

5. Peak Operation:
If top == -1, display "Stack is empty".
Else return element at ar[top].

6. Display Operation:
If top == -1, display "Stack is empty".
Else print elements from 0 to top.

7. In main() function:
Create stack object s1.
Perform push, pop, peak and display operations.

# Conclusion:
Stack is successfully implemented using Array in C++.

The program performs all basic stack operations: Push, Pop, Peak, and Display.

It follows the LIFO (Last In First Out) principle.

Overflow and Underflow conditions are also handled properly.
