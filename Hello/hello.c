#include <stdio.h>
int main() {
	printf("Hello Awesome WASM.\n");
	for (int i = 0; i < 5; i++) {
		printf("\n");
		for(int j = 0; j <= i; j++) {
			printf("*");
		}
	}
	return 0;
}