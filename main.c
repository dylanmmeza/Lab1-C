// Author: Dylan Meza dmm7036@psu.edu
// Contributor: Soham Mishra svm6422@psu.edu
// Contributor: Adnan Traore aqt5519@psu.edu
// Contributor: Sydney Wetzel skw5571@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  double temp= atof(celsius);
  double  Fahrenheit = (temp *1.8)+32;
  printf("%lf° in Celsius is equivalent to " "%lf° in Fahrenheit." , temp, Fahrenheit);
  return 0;
}

//38.500000° in Celsius is equivalent to 101.300000° Fahrenheit.