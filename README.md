# Configure Development Environment

### Configure VIM

`$ cd ~/`    
`$ git clone https://github.com/sorc-lab/sorc-dotfiles.git`    
`$ mv sorc-dotfiles/.vimrc .`

### Install GCC Compiler

`$ sudo apt−get install gcc`    

### Verify GCC installation

`$ gcc --version`

### Compile a C Hello World

```C
#include <stdio.h>
int main()
{
	printf("Hello, World!");
   	return 0;
}
```

`$ gcc -o hello hello.c`    
`$ ./hello`    
`Hello, World!`

### Install Make

`$ sudo apt install make`

### Install GNU Debugger

`$ sudo apt install gdb`

### Using GDB

`$ gdb ./ex1`    
`(gdb) run`

If the program were to seg fault, run `bt` to get a back trace.
`(gdb) bt`

## Using Break points

Set a break point at the main function:    
`(gdb) break main`    
`(gdb) run`    

List where you are if you get lost:    
`(gdb) list`    

NOTE: The `-g` in Makefile is the flag to set debugging mode to true

Use `bt` to get a backtrace    
Use `step` to step to the next line of code executed.
Use `next`... not sure what this is yet.
Use `continue` to continue the execution and bypass the steps.

Run program w/ GDB with full options:    
`gdb --batch --ex run --ex bt --ex q --args ./ex1`

