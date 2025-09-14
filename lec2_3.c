//series parallel 

#include<stdio.h>

int main()
{
float R1=8,R2=5,R3=6,R4=9,V=20;
float V1, V2,Req,Rs, Rp, I,I1;

Rs= R1+R2;
Rp=(Rs*R3)/(Rs+R3);
Req=R4+Rp;
I=V/Req;
I1=(R3/(R1+R2+R3))*I ;// Current Divider Rule
V1=I1*R2; 
V2=I1*R1;

printf("Voltage across the 8 ohm =%f V\n",V2);
printf("Voltage across the 5 ohm =%f V",V1);

return 0 ;
}
