#include<stdio.h>

union CarData {
    char model[50];
    float price;
    int year;
} car;

int main() {

    strcpy(car.model, "Toyota Corolla");
    car.price = 25000.50;
    car.year = 2020;

    printf("Model: %s\n", car.model);
    printf("Price: %.2f\n", car.price);
    printf("Year: %d\n", car.year);

    return 0;
}