#include <stdio.h>

int main() {
    float caloriesBurnedPerMinute = 3.9;
    float x;

    printf("How many minutes you exercise\n");
    scanf("%f", &x);

        float caloriesBurned = caloriesBurnedPerMinute * x;
        printf("calories burned: %f", caloriesBurned );
    

    return 0;
}