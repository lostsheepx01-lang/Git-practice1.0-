#include <stdio.h>
int main() 
{
  float x ,y ;
  float fahrenheit,celcius ;
  printf("enter temperature in degree celcius");
  scanf("%f",&x);
  fahrenheit= (1.8* x)+32;
  printf("given temperature in fahreneheit is %f \n",fahrenheit);
  printf("enter temperature in degree fahrenheit");
  scanf("%f",&y);
  celcius= (y-32)*5/9;
  printf("given temperature in degree celcius is %f \n" celcius);
  return 0;
}
