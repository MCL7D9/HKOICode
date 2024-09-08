#include <stdio.h>

int main(){
     float weight,height,BMI;
     scanf("%f %f",&weight,&height);
     BMI=weight/(height*height);
     printf("%.3f\n",BMI);
     if (BMI<18.5) {
          printf("Underweight");
     } else if (BMI<23.0) {
          printf("Normal");
     } else if (BMI<25.0) {
          printf("Overweight");
     } else {
          printf("Obese");
     }
     return 0;
}