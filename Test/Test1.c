#include <stdio.h>

float bill(int units);

int main()
{
    int units;
    float amount;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    amount = bill(units);

    printf("Electricity Bill = Rs. %.2f", amount);

    return 0;
}

float bill(int units)
{
    float amount;

    if (units >= 1 && units <= 50)
        amount = units * 30;
    else if (units <= 150)
        amount = units * 40;
    else
        amount = units * 50;

    return amount;
}
