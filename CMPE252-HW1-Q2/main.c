#include <stdio.h>
#include <math.h>

float formula(int, float, float, float);

int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    int min_x_n = 0;
    int max_x_n = 0;

    printf("Enter value of a:\n");
    scanf("%f", &a); //Scanning the input for a

    printf("Enter value of b:\n");
    scanf("%f", &b);//Scanning the input for b

    printf("Enter value of c:\n");
    scanf("%f", &c);//Scanning the input for c

    printf("Enter minimum value of x_n:\n");
    scanf("%d", &min_x_n);//Scanning the input for min_x_n

    printf("Enter maximum value of x_n:\n");
    scanf("%d", &max_x_n);//Scanning the input for max_x_n

    while(min_x_n <= max_x_n){ //Print until the min value exceeds the max_x_n value
        printf("x_%d : %.2f \n", min_x_n, formula(min_x_n, a, b, c));
        min_x_n++; //Increase min_x_n after printing
    }

    return 0;
}

float formula(int n, float a, float b, float c){
    if(n == 0)
        return 10;
    else
        return formula(n-1, a, b, c) * b + ((-b + sqrt(pow(b,2) - 4 * a * c))/(2 * a));
}
