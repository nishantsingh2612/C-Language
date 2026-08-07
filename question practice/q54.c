/* Program that defines a Car structure with fields for make, model, year and colour
and pass it to a function that prints out the description of the car in one sentence*/
#include<stdio.h>

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
    Car rolls = {.make = "Rolls Royce", .model = "Ghost",
    .colour = "Diamond Black", .year = 2040};

    printf("Welcome to my world of car\n");
    print_car(&rolls);
    return 0;
}
void print_car(Car *car)
{
    printf("The %s model of car is made by %s company, which is of %s colour, and is purchased in year %d",
        car->model, car->make, car->colour, car->year);
}