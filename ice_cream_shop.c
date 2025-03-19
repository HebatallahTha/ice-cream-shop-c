#include <stdio.h>
char displayMenu();
int main() {
  char menuChoice = ' ';
  int totalChocolatesold = 0;
  int totalVanilaasold= 0 ;
  int totalFudgesold= 0 ;
  int totalConessold = 0;
  float totalAmountcollected = 0.0;

  menuChoice = displayMenu();
  while (menuChoice != 'Q' && menuChoice != 'q') {

    //------------------------

    if (menuChoice == 'Q' || menuChoice == 'q') {
      printf("Goodbye!\n");
      printf("The total number of cones sold:%d\n", totalConessold);
      printf("The total scoops of vanilla sold:%d\n", totalVanilaasold);
      printf("The total scoops of chocolate sold:%d\n", totalChocolatesold);
      printf("The total scoops of fudge sold:%d\n", totalFudgesold);
      printf("The total amount collected:$%.2f\n", totalAmountcollected);

    } // end if

    float priceperScoops, icecreamCone, totalicecreamCost, icecreamScoops;
    totalicecreamCost = 2;
    priceperScoops = 1.25;
    icecreamCone = 0.75;

    printf("How many scoops would you like?\n");
    scanf("%f", &icecreamScoops);

    while (icecreamScoops < 1 || icecreamScoops > 4) {
      printf("That is an invalid number of scoops! You may only choose between "
             "1 and 4. Please try again!\n");
      printf("How many scoops would you like?\n");
      scanf("%f", &icecreamScoops);

    } // end while
    totalicecreamCost = icecreamCone + priceperScoops * icecreamScoops;

    switch ((int)icecreamScoops) {
    case 1:
      printf("Your icecream cone costs $%.2f\n", totalicecreamCost);
      totalAmountcollected += totalicecreamCost;
      totalConessold++;

      if (menuChoice == 'V' || menuChoice == 'v') {
         totalVanilaasold= totalVanilaasold+icecreamScoops;
      } else if (menuChoice == 'C'  ||menuChoice == 'c') {
        totalChocolatesold= totalChocolatesold+icecreamScoops;
      } else if (menuChoice == 'F' ||menuChoice == 'f') {
        totalFudgesold= totalFudgesold+icecreamScoops;
      }
      break;
    case 2:
      printf("Your icecream cone costs $%.2f\n", totalicecreamCost);
      totalAmountcollected += totalicecreamCost;
      totalConessold++;
 if (menuChoice == 'V' || menuChoice == 'v') {
         totalVanilaasold= totalVanilaasold+icecreamScoops;
      } else if (menuChoice == 'C'  ||menuChoice == 'c') {
        totalChocolatesold= totalChocolatesold+icecreamScoops;
      } else if (menuChoice == 'F' ||menuChoice == 'f') {
        totalFudgesold= totalFudgesold+icecreamScoops;
      }
      break;
    case 3:
      printf("Your icecream cone costs $%.2f\n", totalicecreamCost);
      totalAmountcollected += totalicecreamCost;
      totalConessold++;

       if (menuChoice == 'V' || menuChoice == 'v') {
         totalVanilaasold= totalVanilaasold+icecreamScoops;
      } else if (menuChoice == 'C'  ||menuChoice == 'c') {
        totalChocolatesold= totalChocolatesold+icecreamScoops;
      } else if (menuChoice == 'F' ||menuChoice == 'f') {
        totalFudgesold= totalFudgesold+icecreamScoops;
      }

      break;
    case 4:
      printf("Your icecream cone costs $%.2f\n", totalicecreamCost);
      totalAmountcollected += totalicecreamCost;
      totalConessold++;

       if (menuChoice == 'V' || menuChoice == 'v') {
         totalVanilaasold= totalVanilaasold+icecreamScoops;
      } else if (menuChoice == 'C'  ||menuChoice == 'c') {
        totalChocolatesold= totalChocolatesold+icecreamScoops;
      } else if (menuChoice == 'F' ||menuChoice == 'f') {
        totalFudgesold= totalFudgesold+icecreamScoops;
      }
      break;
      // this ends my if statement

    } // end switch
    menuChoice = displayMenu();

  } //----------------------------------------------------------
  if (menuChoice == 'Q' || menuChoice == 'q') {
    printf("Goodbye!\n");
    printf("The total number of cones sold:%d\n", totalConessold);
    printf("The total scoops of vanilla sold:%d\n", totalVanilaasold);
    printf("The total scoops of chocolate sold:%d\n", totalChocolatesold);
    printf("The total scoops of fudge sold:%d\n", totalFudgesold);
    printf("The total amount collected:$%.2f\n", totalAmountcollected);

  } // end if

  return 0;
} // end main

char displayMenu() {
  char menuChoice;
  printf("  Please Choose your Favorite Flavor!\n");
  printf("  V - Vanilla\n");
  printf("  C - Chocolate\n");
  printf("  F - Fudge\n");
  printf("  Q - Quit\n");

  scanf("\n%c", &menuChoice);
  while (menuChoice != 'V' && menuChoice != 'v' && menuChoice != 'C' &&
         menuChoice != 'c' && menuChoice != 'F' && menuChoice != 'f' &&
         menuChoice != 'Q' && menuChoice != 'q') {
    printf("You have entered an invalid flavor – Try Again!\n");
    printf("  Please Choose your Favorite Flavor!\n");
    printf("  V - Vanilla\n");
    printf("  C - Chocolate\n");
    printf("  F - Fudge\n");
    printf("  Q - Quit\n");

    scanf("\n%c", &menuChoice);
  }
  return menuChoice;
}

