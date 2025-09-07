
#include <stdio.h>
int main() {
    //ประกาศตัวแปร (Declare variable)
    double money , money_share;
    int person;

    printf("-----------------------------\n");
    printf("         Money Share\n         ");
    printf("-----------------------------\n");
    printf("Input Money : ");    
    scanf("%lf", &money);
    printf("Input Person : ");    
    scanf("%d", &person);
    money_share = money / person;
    printf("-----------------------------\n");
    printf("Money per person : %.2lf\n", money_share); 
    printf("-----------------------------\n");
    
    return 0;
}