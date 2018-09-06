# Instructions

1. Compile using `emcc -o helloFn.html helloFn.c -O3 -s WASM=1 --shell-file shell_minimal.html -s NO_EXIT_RUNTIME=1  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'`  
2. Open the helloFn.html through a server.  
3. Press `Run myFunction` button and view the output in console.