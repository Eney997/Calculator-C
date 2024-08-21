#include <stdio.h>
#include "header.h"

int calculator(){

    double num1,num2;
    int choice = 0;

    chde:

    printf("\n\n\n" "               Welcome to the Eney calculator,\n"
       "               you only have 4 seconds to see the answer.\n\n");
    printf("               1. Multiplication\n"
           "               2. Division\n"
           "               3. Addition\n"
           "               4. Subtraction\n"
           "               5. Exit\n\n"
           "               Enter your choice: ");

    scanf("%d",&choice);

    switch(choice){
      case 1:
          printf("\n" "               Enter your first number: ");
          scanf("%lf",&num1);
          printf("               Enter your second number: ");
          scanf("%lf",&num2);
          printf("\n" "               Your answer is %lf",num1*num2);
          sleep(4);
          system("cls");
          goto chde;
      break;
      case 2:
          printf("\n" "               Enter your first number: ");
          scanf("%lf",&num1);
          printf("               Enter your second number: ");
          scanf("%lf",&num2);
          printf("\n" "               Your answer is %lf",num1/num2);
          sleep(4);
          system("cls");
          goto chde;
      break;
      case 3:
          printf("\n" "               Enter your first number: ");
          scanf("%lf",&num1);
          printf("               Enter your second number: ");
          scanf("%lf",&num2);
          printf("\n" "               Your answer is %lf",num1+num2);
          sleep(4);
          system("cls");
          goto chde;
      break;
      case 4:
          printf("\n" "               Enter your first number: ");
          scanf("%lf",&num1);
          printf("               Enter your second number: ");
          scanf("%lf",&num2);
          printf("\n" "               Your answer is %lf",num1-num2);
          sleep(4);
          system("cls");
          goto chde;
      break;
      case 5:
          exit(0);
      break;
      default:
        printf("\n" "               Invalid choice");
        sleep(2);
        system("cls");
        goto chde;
      break;
    }
    return 0;
}
