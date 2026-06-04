
// Chapter 9: Structures - Task 1.3 (by me using structure array)
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int code;
    int number;
};

int main(){
    struct student s[3] = {
        {"Rifat", 8765, 1234},
        {"Fahat", 3456, 3456},
        {"Hafiz", 3657, 2346},
    };

    // loop runs while i is less than 3
    for (int i = 0; i < 3; i++){
        printf("Name: %s\t Code: %d\t Number: %d\n", s[i].name, s[i].code, s[i].number);
    }
    return 0;
}
