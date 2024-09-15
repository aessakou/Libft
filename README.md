# **Libft: Custom C Library**

&nbsp;&nbsp;&nbsp;&nbsp;This project involved creating Libft, a custom C library that replicates essential functions from
the C standard library, along with some additional utility functions. It includes string manipulation, memory management,
and conversion functions. This library forms the foundation for future projects in the 42 cursus, allowing deeper understanding
of C programming and memory handling.

Here’s a more detailed breakdown of the three parts of the Libft project, focusing on their goals and benefits:

## **1. Mandatory Part: Libc Functions**
### **Goal:**
&nbsp;&nbsp;&nbsp;&nbsp;The first part of the project is about re-implementing a set of functions from the standard C library (libc),
like `strlen`, `memcpy`, `atoi`, and many others, but with your own code. The functions must behave exactly like the standard ones.
(Here philosophers 'Peers' differed: if the output of a function from `libc` is `Segmentation fault`,
What should the output of my `ft_function` be? )

### **Benefit:**
&nbsp;&nbsp;&nbsp;&nbsp;By recreating these functions, you develop a deeper understanding of how they work under the hood,
allowing you to optimize your own code in future projects. It also teaches you important concepts like memory handling,
string operations, and low-level data manipulation, which are essential for efficient C programming.

## **2. Mandatory Part: Additional Functions**
### **Goal:**
&nbsp;&nbsp;&nbsp;&nbsp;This section introduces more complex utility functions that aren't part of the standard libc
but are incredibly useful in practice. Functions like `ft_split` (to split strings), `ft_substr` (to extract substrings),
and `ft_strjoin` (to concatenate strings) are part of this section. These functions are often necessary to handle real-world
problems that you'll encounter in later projects.

### **Benefit:**
&nbsp;&nbsp;&nbsp;&nbsp;Writing these additional functions enhances your problem-solving skills and teaches how to work with
dynamic memory allocation using `malloc`, handle strings more flexibly, and create more modular and reusable code.
You learn to manage memory efficiently, avoid memory leaks, and write more adaptable code.

## **3. Bonus Part: Linked List Functions**
### **Goal:**
&nbsp;&nbsp;&nbsp;&nbsp;The bonus part of the project adds functionality to handle linked lists, a critical data structure in C.
It involves functions like `ft_lstnew` (to create a new list node), `ft_lstadd_front` (to add a node at the beginning of a list),
`ft_lstiter` (to iterate over a list), and more.

### **Benefit:**
&nbsp;&nbsp;&nbsp;&nbsp;Linked lists are one of the most important data structures in programming. Through this part of the project,
you get hands-on experience with pointers, dynamic memory allocation, and data structures. It significantly improves your ability
to write efficient algorithms, which is crucial for more advanced projects, such as graph traversal, sorting algorithms,
or even complex AI structures.

## **Overall Benefits:**
&nbsp;&nbsp;&nbsp;&nbsp;• Improved understanding of the C programming language, memory management, and data structures.
&nbsp;&nbsp;&nbsp;&nbsp;• Foundation for future projects: Libft can be reused as a personal utility library, giving
you a toolkit to solve common problems quickly.
&nbsp;&nbsp;&nbsp;&nbsp;• Solid experience in debugging, testing, and ensuring code compliance with standard C norms
and handling various edge cases in programming.
