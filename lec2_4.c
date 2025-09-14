/* 
Program: series paraalel circuit solve                
Author: Alrafi Siddiquee Jim                       // documentaion section 
Roll: 2303113
Date: 08-09-2025
*/


#include<stdio.h>        //  link section ,link the program with libraries 
                                   
int main()
{
float R1=7,R2=6,R3=5,R4=4,V=20;
float Req, Rp, Rs,I,I1,I2, I3;
Rp=(R1*R2)/(R1+R2);
Rs= Rp+R3;
Req=R4*Rs/(R4+Rs);
I=V/Req;
I1=(R4/(Rs+R4))*I; /*current divider rule*/
I2=(R1/(R1+R2))*I1;
I3=(R2/(R1+R2))*I1;


printf("current I =%f A\n",I);
printf("current I1 =%f A\n",I1);
printf("current I2=%f A\n",I2);
printf("current I3=%f A",I3);

return 0 ;
}
