Program Description:

This C program implements a simple calculator that allows users to perform basic arithmetic operations (+, -, *, /) on two numbers. It utilizes the switch statement to handle different user choices for the desired operation.
Header inclusion: #include <stdio.h> is included for standard input/output functions like printf and scanf.
Variable declaration:
num1 and num2 are declared as float to handle both integers and floating-point numbers.
operator is declared as a char to store the chosen arithmetic operator.
User input:
The user is prompted to enter two numbers, which are stored in num1 and num2 using scanf.
The user is then prompted to choose an operation using printf and the user's input is stored in operator with scanf. Note the space before %c to consume the newline character left by printf.
Switch statement:
The switch statement evaluates the value of operator.
Each case block handles a specific operator (+, -, *, /).
Inside each case block, the corresponding operation is performed using printf with formatted output (%.2f specifies two decimal places).
The break statement exits the switch after a matching case is executed.
The default case handles invalid operators.
Division by zero check:
In the / case, there's an if statement to check if num2 (the divisor) is zero.
If it's zero, an error message is printed. Otherwise, the division is performed.
Return statement: main returns 0 to indicate successful program execution.
Running the program on Ubuntu using Terminal:

steps to clone: git clone https://github.com/DHANUSHG11/BASICCALCULATOR-USING-C.git

Open Terminal: Press Ctrl+Alt+T or search for "Terminal" in the Applications menu.

Navigate to the directory: Use the cd command to navigate to the directory where you saved the C program file (e.g., cd Desktop).

Compile the program: Use the C compiler (gcc) to compile your code. For example, if your file is named calculator.c, run:
This creates an executable file named calculator.
The program will prompt you for two numbers and an operation, then perform the calculation and display the result.


