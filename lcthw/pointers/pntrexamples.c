#include <stdio.h>

int main(int argc, char* argv[])
{
	char* str_example1 = "String Example 1";
	char str_example2[] = "String Example 2";

	// produces the same output
	printf("\n");
	printf("%s\n", str_example1);
	printf("%s\n", str_example2);

	// type *ptr          - A pointer of type named ptr
	// *ptr               - The value of whatever ptr is pointed at
	// *(ptr + i)         - The value of (whatever ptr is pointed at plus i)
	// &thing             - The address of thing
	// type *ptr = &thing - A ptr of type named ptr set to the addr of thing
	// ptr++              - Increment where ptr points

	int height = 100;
	int* cur_height = &height;
	printf("%d\n", *cur_height);
}

