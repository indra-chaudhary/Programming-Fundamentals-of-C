/*
  Student Name: Indra Kumar Chaudhary.
  Subject: Programming Fundamentals.
  Roll:
  Programe: Write a program to print are of surface and volume of sphere.
  LAB No.:01
  Date: 18-09-2016

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main(){

	int radius,area,volume;

	clrscr();
	printf("Enter the radius of a sphere \n");
	scanf("%d",&radius);

      // radius = pow(radius,2);
	surface = 4*3.14*radius*radius;

	printf("The surface is : %d\n", area);
    //volume = (4/3)*3.14*radius*radius
	volume = 1.33*3.14*radius*radius;
	printf("The volume of sphere is : %d",volume);
	getch();

 }
