#include "stdio.h" // หรือ #include <stdio.h>

int main(){
    //python ===>>> name = input("Enter your name: ")
    //python ===>>> age = input("Enter your age: ")

    //ป้อนชื่อ ป้อนอายุ
    //declare variable
    char name[50];
    int age; //long int
    
    int n1 , n2 , n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%d %d %d\n", n1, n2, n3);

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter ypur age: ");
    scanf("%d", &age);
    printf("-----------------------------\n");
    printf("Hello.... %s\n", name);
    printf("Your age is %d\n", age);


    return 0;
}