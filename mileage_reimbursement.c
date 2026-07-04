#include <stdio.h>

int main() {
    double beg;
    double end;
    double miles;
    double total;
    const double rpm= 0.35;

    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    
    printf("Enter the beginning odometer reading: ");
    scanf("%lf", &beg);
    
    printf("Enter the ending odometer reading: ");
    scanf("%lf", &end);
    
    miles = end - beg;
    total= miles * rpm;
    
    printf("You traveled %.1f miles, at Rs. 0.35 per mile.\n", miles);
    printf("Your reimbursement is Rs. %.2f\n", total);
    
    return 0;
}