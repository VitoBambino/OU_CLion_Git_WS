#include <stdio.h>

int Policz(int a,int b){
    return  (a+b)*(a-b);
}

int main() {
    printf("Hello, World! \n");
    printf("N pierwszym branchu; 2 * 3 = %d", Policz(2,3));
    return 0;
}
