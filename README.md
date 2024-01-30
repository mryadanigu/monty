# Monty

Monty is a stack-based interpreter written in C. It is designed to execute a set of specific opcode instructions, providing a simple and efficient tool for stack manipulation. The interpreter supports essential operations like push, pop, swap, add, and nop, each implemented in dedicated files to maintain code modularity.

## Features

- **Opcode Operations:** Execute stack manipulation operations using opcodes specified in your Monty script.
- **Error Handling:** Robust error handling to gracefully manage various scenarios, ensuring a stable interpreter.
- **Data Structures:** Utilizes well-defined data structures, including a doubly linked list representation of a stack.

## Getting Started

To run Monty, follow these simple steps:

1. **Clone the repository:**

   ```bash
   git clone https://github.com/mryadanigu/monty.git
   
2. **Compile the source code:**

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
   
3. **Execute Monty with your script:**

   ```bash
   ./monty your_script.m
   
   ## Team

This project is developed and maintained by a collaborative team:

- **ABEL Chanyalew**
- **Yared Nigusie**
