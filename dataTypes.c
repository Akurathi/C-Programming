#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b ;
    char c[100];

    char z;

    // Read and save an integer, double, and String to your variables.
    scanf("%d",&a);
    scanf("%lf",&b);

    fgets (c, 100, stdin);
    scanf ("%[^\n]%*c", c);


    // Print the sum of both integer variables on a new line.
    printf("%d \n",a+i);

    // Print the sum of the double variables on a new line.
    printf("%.1f \n",b+d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
   char *result = malloc(strlen(s)+strlen(c)+1);
    strcpy(result, s);
    strcat(result, c);
    printf("%s \n",result);
    return 0;
}
