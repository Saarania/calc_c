#include <stdio.h>
#include <stdbool.h>

float getNumber(int lower, int upper);

enum operation{Add=1, Sub=2, Mul=3, Div=4};

int main() {

    printf("Welcome to the calculator ");

    bool calcRunning = true;

    while (calcRunning) {
        printf("beggin with writting any number you want\n");
        float input = getNumber(0,0);
        //fds
        //fds
        
        printf("Great, now type another number to work with.\n");
        float input2 = getNumber(0,0);

        printf("Nicee, now chose which operation you want to execute. \n1=add\n2=sub\n3=mul\n4=div\n");
        int operInput = (int) getNumber(1,4);
        
        float result;

        switch (operInput) {
            case Add:
                result = input + input2;
                break;
            case Sub:
                result = input - input2;
                break;
            case Mul:
                result = input * input2;
                break;
            case Div:
                result = input / input2;
                break;
        }

        printf("Result = %f\n", result);
        printf("Do you want to continue?\nYes = 1\nNo = 2\n");
        if ((int) getNumber(1,2) == 2) {
            calcRunning = false;
        }

    }

}

float getNumber(int lower, int upper) {
    /*
        Use for getting numeric floating point input from user. You can choose upper and lower value inclusive.
        If you dont want to use upper and lower restriction, set both arguments to same value.
    */
    if (lower > upper) {
        //Inapropriate input
        return 1.0/0.0;
    }
    float num;
    char term;
    while (1) {
        if((scanf("%f%c", &num, &term) != 2 || term != '\n'))
            //Failure
            continue;
        else
            //accepted value
            if (upper == lower) {
                return num;
            }
            if (num <= upper && num >= lower) {
                return num;
            }              
            
    }
}