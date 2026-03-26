#include <stdio.h>

void increment(int x) {//값을 전달받음(메모리의 주소가 다름)
    ++x;
    printf("%d\n", x);
}

int main() {
    int x = 10;

    printf("%d\n", x);
    increment(x);//값을 전달
    printf("%d\n", x);//10 출력(메모리 주소가 다름)

    return 0;
}
