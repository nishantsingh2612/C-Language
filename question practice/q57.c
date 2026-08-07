/* Program that dynamically allocates memory for a Car structure
and then free it at the end of the program */
#include<stdio.h>
#include<stdlib.h>

struct Car
{
    char make[25];
    char model[25];
    int year;
    char colour[25];
};
typedef struct Car Car;

void print_car(Car *car);

int main()
{
    printf("Welcome to dynamic memory allocation\n");

    Car *my_car = (Car *) malloc (sizeof(Car)); // Dynamic memory allocation
    if(my_car == NULL)
    {
        printf("Memory is not allocated!!");
        return 1;
    }

    printf("Enter your car's model: ");
    scanf(" %s", my_car->model);
    printf("Enter your car's company: ");
    scanf(" %s", my_car->make);
    printf("Enter your car's colour: ");
    scanf(" %s", my_car->colour);
    printf("Enter your car's year: ");
    scanf(" %d", &my_car->year);

    printf("Here are your car's details: \n");
    print_car(my_car);

    free(my_car); // Free
    my_car = NULL;
    return 0;
}

void print_car(Car *car)
{
    printf("The %s model of car is made by %s company, which is of %s colour, and is purchased in year %d",
        car->model, car->make, car->colour, car->year);
}