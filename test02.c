#include <stdio.h>

// การใช้ standard/built-in function ใน c ต้องรู้ว่าอยู่ใน Library file (h.) อะไรแล้วต้อง #รืinclue
//printf("??????????") 
//scanf("???", &????);

//'?' ใน c คือตัวอักษรตัวเดียว (character)
//"???????" ใน c คือข้อความ จะมีหรือไม่มีก็ได้ (ตัวอักษรตั้งแต่ 0 ตัวขึ้นไป) (string/text) 

int main() {
    
    printf("AAAAA");
    printf("%s", "BBBBB %d", "CCC" , 100);
    printf("XYZ %f ^_^ %lf " , 150.45, 158.45687987); //float , double 
    printf("ABCD %c %s ", 'B', "");

    return 0;
}