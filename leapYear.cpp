#include <stdio.h>

bool checkLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int main(){

    int year; 

    printf("Write down a year to check if it's a leap year: ");
    scanf_s("%i", &year);

    bool answer = checkLeapYear(year);

    if (answer) {
        printf("It's an Leap Year!");
    }
    else {
        printf("It's not ...");
    }
}
