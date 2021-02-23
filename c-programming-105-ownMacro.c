#include <stdio.h>

#define PI 3.14

#define CIRCLE_AREA(X) ((PI) * (X) * (X))

#define WARNING(...) fprintf(stderr, __VA_ARGS__)

// #define FOO BAR
// #define BAR (12)

// #define MISC(x) (puts("incrementing", (x)++))

// #define MAX(a, b) ((a) > (b) ? <(a) : (b))

// #define UpTo(i, n) for ((i) = 0; (i) < (n); (i)++)

int main() {
    int c = 5;
    int area = CIRCLE_AREA(c + 2);
    printf("Area is %d\n", area);

    WARNING("%s: this program is here\n", "Test");

    return 0;
}