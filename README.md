# Maman-22

i need to write a program in c that except user input. the user should enter the name of a command from the following list of commands:
void read_comp (complex * c, double a, double b);
void print_comp (complex c);
void add_comp (complex a, complex b);
void sub_comp (complex a, complex b);
void mult_comp_real (complex c, double d);
void mult_comp_img (complex c, double d);
void mult_comp_comp (complex c, complex d);
void abs_comp (complex c);
void stop ();

there are several demands:
1. Each command will appear in its entirety on a single input line, including all parameters. Blank lines (lines containing only white characters) are also allowed.
2. The command name is separated from the first parameter by spaces and/or tabs (one or more).
3. There is one comma between every two operands. There can be an unlimited number of spaces and/or tabs before and after the comma. There must not be a comma after the last parameter.
4. There can be an unlimited number of spaces and/or tabs before the command name, and also at the end of the line (after the last parameter).
5. There must be no garbage characters at the end of the line (except whitespace characters).
6. Command names will appear in lowercase only, and variable names in uppercase only.

A user-friendly interface must be implemented so that the user can understand at each stage of the program what he or she must do. In particular, the program must notify the user with a message or prompt whenever it is ready to receive the next command. The program will continue to receive and execute command after command until the stop command is received.

The program does not assume that the input is correct. The program must analyze each command and ensure that it is error-free. If an error is detected, the program will print a detailed error message and continue to the next command without executing the incorrect command. for example: 
for the input read_comp G, 3, 6 the program should print the following error: Undefined complex variable
for the input add_comp A the program should print the following error:  Missing parameter 
for the input add_comp A ,, B the program should print the following error: Multiple consecutive commas
for the input add_comp A , B f the program should print the following error: Extraneous text after end of command

here is an example of a proper way the user should enter a command of choise:
add_comp A, B
