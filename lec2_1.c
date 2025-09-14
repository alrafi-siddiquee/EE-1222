//series circuit 

 #include <stdio.h>

int main() {
    float R1, R2, R3, R, V;
    float I,V1,V2,V3;

    printf("Enter the 3 resistances: ");
    scanf("%f %f %f", &R1, &R2, &R3);

    printf("Enter the voltage: ");
    scanf("%f", &V);

    R = R1 + R2 + R3;
    I = (float)V/R; 
    V1=I*R1;
    V2=I*R2;
    V3=I*R3;

    printf("current %f\n",I);
    printf("voltage across the loads: V1=%f, V2=%f, V3=%f", V1,V2, V3);

    return 0;
}

