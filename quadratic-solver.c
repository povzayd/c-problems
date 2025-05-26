#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, sol1, sol2, disc;
    printf("Quadratic Equation Solver\n");
    printf("Enter Values of a: ");
    scanf("%lf", &a);
    printf("Enter Values of b: ");
    scanf("%lf", &b);
    printf("Enter Values of c: ");
    scanf("%lf", &c);
    disc = b*b - 4*a*c;
//check if dis = 0 
    if (disc >= 0) {
      //sol1 = (-b + sqrt(disc)) / (2*a);
        sol1 = (-b + sqrt(disc)) / (2*a);
      //sol2 = (-b - sqrt(disc)) / (2*a);
        sol2 = (-b - sqrt(disc)) / (2*a);
        printf("One Value Of x will be %.2lf\n", sol1);
        printf("Another Value Of x will be %.2lf\n", sol2);
    } else {
        printf("The equation has complex roots.\n");
    }
    return 0;
}
//example equation : x2 + 5x + 6