#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pearson{
    char name[30];
    int age;
};

int main(){
     struct pearson p1, *p3;
    p3 = &p1;

    strcpy((*p3).name, "Ana"); //or also strcpy(p3 ->name, "Ana");
    (*p3).age = 18; //*p3->age = 18;
    printf("Pearson 1) Name: %s, Age: %d", p1.name, p1.age);

    printf("\n\n\n");
    system("pause");
    return 0;
}
