#include <stdio.h>
#include "lr.h"
int main(){
    int choise,p;
    printf("Vvedite nomer labu\n");
    scanf("%d", &choise);
    switch(choise){
    case(1): printf("laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab1();break;}else{lab1_1(); break;}
    case(2): printf("laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab2();break;}else{lab2_1(); break;}
    case(3): printf("laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab3();break;}else{lab3_1(); break;}
    case(4): printf("laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab4();break;}else{lab4_1(); break;}
    case(5): printf("laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab5();break;}else{lab5_1(); break;}
    case(6): printf("laba bez dop zadania 1, s dop zadaniem 2\n");scanf("%d", &p);if(p==1){ lab6();break;}else{lab6_1(); break;}
    case(7): lab7();break;}
        printf("\n");
        system("pause");
return 0;
}
