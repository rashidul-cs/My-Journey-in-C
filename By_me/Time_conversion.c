
//Time Conversion: Converts Seconds to (Hour:Minutes:Second) Format
#include <stdio.h>
int main(){
    int total_sec, h, m, s;
    printf("Enter Total Seconds: ");
    scanf("%d", &total_sec);

    h = total_sec/3600;
    m = (total_sec%3600)/60;
    s = total_sec%60;
    printf("Format [H:M:S]: %02d:%02d:%02d", h, m, s);
    return 0;
}
