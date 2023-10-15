#include <stdio.h>
#include <math.h>

int main() {
    // Define the array of angles in degrees
    int angles[] = {0, 30, 45, 60, 90};

    // Print the table header
    printf("Angle (degrees)\tSin\tCos\tTan\tSec\tCosec\tCot\n");

    // Loop through each angle
    for (int i = 0; i < 5; i++) {
        int angle = angles[i];
        double radian = angle * M_PI / 180.0;  // Convert degrees to radians

        // Calculate trigonometric values
        double sin_val = sin(radian);
        double cos_val = cos(radian);
        double tan_val = tan(radian);
        double sec_val = 1.0 / cos_val;
        double csc_val = 1.0 / sin_val;
        double cot_val = 1.0 / tan_val;

        // Print the values for each angle
        printf("%d\t\t\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",
               angle, sin_val, cos_val, tan_val, sec_val, csc_val, cot_val);
    }

    return 0;
}
