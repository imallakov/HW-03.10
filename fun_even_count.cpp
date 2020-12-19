#include <iostream>
#include <stdarg.h>

int even_count(int N, int x, ...) {
	va_list args;
	va_start(args, x);
	int total = x;
	int k=0;
	while (N--) {
		if(total%2==0) ++k;
		total = va_arg(args, int);
	}
	va_end(args);
	return k;
}

int main()
{
	std::cout << even_count(7, 1, 2, 3, 4, 3, 2, 1) << std::endl;
}
