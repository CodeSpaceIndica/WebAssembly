#include <stdio.h>
#include <emscripten/emscripten.h>

int main() {
    printf("Begin...\n");
}

EMSCRIPTEN_KEEPALIVE int factorial(int n) {
    int facto = 1;
    int i;
    for(i=n; i>=1; i--) {
        facto = facto * i;
    }
    return facto;
}
