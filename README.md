# Custom C Shell Implementation

## Overview
This is a custom shell implementation in C, featuring several advanced command handling capabilities including:
- Background process execution
- Piping between commands
- Input/Output redirection
- Built-in CD (change directory) command

## Features
- Interactive command-line interface
- Background process support (using `&`)
- Pipe command processing
- Input/Output redirection
- Change directory functionality
- Colorful command-line display

## Dependencies
- GCC Compiler
- Standard C Libraries (stdio.h, stdlib.h, unistd.h, sys/wait.h)

## Compilation
Use the provided Makefile to compile the project:

```bash
make
```

## Running the Shell
After compilation, run the shell:

```bash
./shell
```

## Supported Commands
- Standard shell commands
- Background processes (append `&`)
- Piped commands using `|`
- Redirection using `>` and `<`
- Built-in `cd` command
- `exit` to quit the shell

## Examples
```bash
$> ls -l
$> ping google.com &
$> cat file.txt | grep "error"
$> ls > output.txt
$> cd /home/user
```

## Error Handling
The shell provides color-coded error messages for:
- Process forking errors
- Command execution errors
- Invalid background process syntax

## Project Structure
- `main.c`: Main shell logic
- `background_handling.c`: Background process handling
- `cd_handling.c`: Change directory implementation
- `execute_handling.c`: Command execution
- `pipe_handling.c`: Pipe processing
- `redirection_handling.c`: I/O redirection

## License
[Specify your license here]

## Author
[Your Name]
