#include <stdio.h>
#include <windows.h>

int main()
{
    //Intro to Program
    printf("Are you trying to find a way to save cash?\n");
    Sleep (2000);
    printf("Is driving to work everyday eating your bank account?\n");
    Sleep (2000);
    printf("Then maybe carpooling is for you!\n");
    Sleep (1000);
    printf("Let me help you find out how much carpooling can save you\n");
    Sleep (2000);

    //Declaring variables
    float gas, cost, tolls, miles;
    int mpg, load, parking;
    char answer[3];

    //Getting miles
    printf("How many miles do you drive a day? ");
    scanf("%f", &miles);

    //Getting gas prices
    printf("So you drive %.1f miles a day? How much is gasoline in your area? ", miles);
    scanf("%f", &gas);

    //Getting MPG
    printf("Wow! $%.2f! How many miles do you get per gallon? ", gas);
    scanf("%d", &mpg);

    //Getting tolls, if there are any
    printf("Are there tolls on your way to work? ");
    scanf("%s", &answer);

    if (strcmp(answer, "yes") == 0)
    {
        printf("How much are they? ");
        scanf("%f", &tolls);
    }else{
        tolls = 0;
    }

    //Getting parking fees, if there are any
    printf("Do you have to pay for parking? ");
    scanf("%s", &answer);

    if (strcmp(answer, "yes") == 0)
    {
        printf("How much? ");
        scanf("%d", &parking);
    }else{
        parking = 0;
    }

    //Finding the Total Cost
    cost = (((float)miles / mpg) * (float)gas) + parking + (float)tolls;

    //Extra little thing
    printf("Okay give me a second to calculate");
    for (load = 0; load < 3; load++)
    {
        printf(".");
        Sleep(500);
    }

    //Printing Answer
    printf("\nCarpooling would save you $%.2f a day\n", cost);
}
