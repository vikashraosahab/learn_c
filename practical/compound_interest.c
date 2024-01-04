#include <stdio.h>
#include <math.h>

int main() {
  // Variable declarations
  float p, r, n, t, ci, final_amount;
  char unit;

  // Get user input with validation
  printf("Enter initial amount: ");
  scanf("%f", &p);
  if (p <= 0) {
    printf("Error: Initial amount must be positive.\n");
    return 1;
  }

  printf("Enter interest rate (decimal): ");
  scanf("%f", &r);
  if (r < 0) {
    printf("Error: Interest rate cannot be negative.\n");
    return 1;
  }

  printf("Enter number of compounding periods per year: ");
  scanf("%f", &n);
  if (n <= 0) {
    printf("Error: Number of compounding periods must be positive.\n");
    return 1;
  }

  printf("Enter time: ");
  scanf("%f", &t); // Fix: Get user input for time
  printf("Enter unit of time (y, m, d): ");
  scanf(" %c", &unit);

  // Convert time to years based on the unit
  switch (unit) {
  case 'y':
    t = t; // years
    break;
  case 'm':
    t = t / 12; // months to years
    break;
  case 'd':
    t = t / 365; // days to years
    break;
  default:
    printf("Error: Invalid time unit.\n");
    return 1;
  }

  // Calculate compound interest and final amount
  ci = p * (pow(1 + r / n, n * t) - 1); // Fix: Correct formula for compound interest
  final_amount = p + ci;

  // Print results with correct formatting
  printf("Compound interest: %.2f\n", ci);
  printf("Final amount: %.2f\n", final_amount);

  return 0;
}



