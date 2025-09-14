
//parallel circuit 

#include <stdio.h>

int main() {
    float R1, R2, R3, R, V;
    float I,I1,I2, I3;

    printf("Enter the 3 resistances: ");
    scanf("%f %f %f", &R1, &R2, &R3);

    printf("Enter the voltage: ");
    scanf("%f", &V);

    // Total resistance for parallel
    R = 1 / ((1 / R1) + (1 / R2) + (1 / R3));

    I = V / R; 
    I1=V/R1;
    I2=V/R2;
    I3=V/R3;
    
    printf("Total current: %f\n", I);
    printf("branch currents : %f %f %f", I1,I2, I3);
    return 0;
}
