/*
    switch( expression ) {
        case value1:
            คําสั่ง...
            break; ไม่มีก็ได้
        case value2:
            คําสั่ง...
            break;
        case value3:
            คําสั่ง...
            break;
        default: ไม่มีก็ได้
            คําสั่ง...
            break;
    }

    *** value เป็นได้แค่ integer, character
    */

#include <stdio.h>
int level;      // ประกาศตัวแปร (Declare Global Variable)
int main() {
    // int level;  // ประกาศตัวแปร (Declare Local Variable)

    printf("-----------------------------\n");
    printf("     Welcome Student\n         ");
    printf("-----------------------------\n");
    printf("Input Your Level : ");
    printf("%d", &level);
    printf("-----------------------------\n");


    switch (level) {
        case 1:
        printf("Hello, You are a freashman\n");
        // break;
        case 2:
        printf("Hello, You are a sophomore\n");
        // break;
        case 3:
        printf("Hello, You are a junior\n");
        break;
        case 4:
        printf("Hello, You are a senior\n");
        break;
    default:
        printf("Hello, T_T\n");
        break;
    
    }

    printf("-----------------------------\n");
    return 0;

}
