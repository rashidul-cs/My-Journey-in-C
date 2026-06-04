
// Chapter 9: Structures - Task 1.2 (struct by me)
#include <stdio.h>
#include <string.h>

struct student {
    char name[10];
    int code;
    int number;
};

int main(){
    struct student s1, s2, s3;
    
    strcpy(s1.name, "Rakib");
    s1.code = 21543;
    s1.number = 1200;

    strcpy(s2.name, "Mubin");
    s2.code = 21223;
    s2.number = 1100;

    strcpy(s3.name, "Sakib");
    s3.code = 21256;
    s3.number = 1000;

    printf("Name: %s\t Code: %d\t Number: %d\n", s1.name, s1.code, s1.number);
    printf("Name: %s\t Code: %d\t Number: %d\n", s2.name, s2.code, s2.number);
    printf("Name: %s\t Code: %d\t Number: %d\n", s3.name, s3.code, s3.number);
    return 0;
}
