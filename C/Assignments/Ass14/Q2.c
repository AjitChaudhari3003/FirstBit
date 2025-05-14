// Create a structure Time with data members as hrs, min, sec. Accept the values 
// of all these members from user and display them. Also perform addition of two
//  time variables and display the result. If sec goes beyond 60, carry it to 
//  min etc. Add a method to convert the given time into sec.
#include<stdio.h>
#include<string.h>

typedef struct Time {
    int hr;
    int min;
    int sec;
} Time;

Time Input() {
    Time t;
    printf("Enter time in hr min sec format: ");
    scanf("%d %d %d", &t.hr, &t.min, &t.sec);
    return t;
}

void display(Time t) {
    printf("%02d:%02d:%02d\n", t.hr, t.min, t.sec);
}

Time Add(Time t1, Time t2) {
    Time result;
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + (result.sec / 60);
    result.sec %= 60;
    result.hr = t1.hr + t2.hr + (result.min / 60);
    result.min %= 60;
    return result;
}

int Convert(Time t) {
    return t.hr * 3600 + t.min * 60 + t.sec;
}

int main() {
    Time t1, t2, sum;
    int totalSecond;

    printf("Enter first time:\n");
    t1 = Input();

    printf("Enter second time:\n");
    t2 = Input();

    printf("\nFirst Time: ");
    display(t1);

    printf("Second Time: ");
    display(t2);

    sum = Add(t1, t2);

    printf("\nSum of Times: ");
    display(sum);

    totalSecond = Convert(sum);

    printf("\nTotal seconds of the resulting time: %d seconds\n", totalSecond);

    return 0;
}
