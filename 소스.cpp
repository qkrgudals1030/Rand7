#include<stdio.h>
int main() {
	long i, c = 1234, s = 5678;
	for (i = 0; i < 10; i++) {
		s = (s * c) % 10000;
		printf("%04d\n", s);
	}
}