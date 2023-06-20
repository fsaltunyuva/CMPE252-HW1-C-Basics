#include <stdio.h>
#include <math.h>

int function(int, int, int);
static int function2(int, float, float, float);

int main() {
    float a = 0;
    float b = 0;
    float n = 0;
    int c = 0;
    int d = 0;

    printf("Enter value of a:\n");
    scanf("%f", &a); //Scanning the input for a

    printf("Enter value of b:\n");
    scanf("%f", &b);//Scanning the input for b

    printf("Enter value of n:\n");
    scanf("%f", &n);//Scanning the input for n

    printf("Enter value of c:\n");
    scanf("%d", &c);//Scanning the input for c

    printf("Enter value of d:\n");
    scanf("%d", &d);//Scanning the input for d

    float result = function(a, c, d) + function(b, c, d); //The first part of the formula in the paranthesis
    float result2 = 0;

    for (int i = 1; i <= n - 1; i++) { //The sum calculation
        result2 += function(function2(i,a,b,n), c, d);
    }

    result += 2 * result2; //Multiplication of the sum with 2

    result = result * (((b - a) / n) / 2); // "h/2" part of the formula

    printf("T: %.2f", result);

    return 0;
}

int function(int x, int c, int d) { //The f(x) in the formula that given
    return pow(x, c) + 2 * d;
}

static int sum = 1;

static int function2(int i, float a, float b, float n){ //Static because it must change a static value
    sum += ((b-a)/n); //sum + h
    return sum;
}