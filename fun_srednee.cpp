#include <iostream>
#include <stdarg.h>

double srednee(int x, ...) {
	va_list args;
	va_start(args, x);
	int a=x;
	double total = 0;
	int k=0;
	while ( a != -1.0 ) {
		total += a;
		++k;
		a= va_arg(args, int);
	}
	va_end(args);
	if(k)
	{
		total/=k;
		return total;
	}
	return 0;
}

int main()
{
	std::cout << srednee( 4, 5, 1, 3, 0, 6, 3, -1) << std::endl;
}
