#include <stdio.h>
#include <emscripten/emscripten.h>

int main() {
	printf("Hello Awesome WASM.\n");
}

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
	printf("MyFunction Called\n");
}