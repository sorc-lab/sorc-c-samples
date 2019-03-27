# Configure Development Environment

## Configure VIM

`$ cd ~/`    
`$ git clone https://github.com/sorc-lab/sorc-dotfiles.git`    
`$ mv sorc-dotfiles/.vimrc .`

## Install GCC Compiler

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
`$ ./hello    
`Hello, World!`

### Install Make

`$ sudo apt install make`

