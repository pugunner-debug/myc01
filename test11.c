/*
    - no parameter no return
*/

#include <stdio.h>

void showHi(); //Declare Function

void showHello(){
    showHi();
    printf("Hello...\n");

    }
    int main() {
    printf("Wow...\n");
    showhello();
    showhello();
    showHi();
  
    return 0;
}

void showHi() {
    printf("Hi...\n");
}