/*
Student Name: Indra Kumar Chaudhary.
Subject : Programming Fundamentals.
Roll:
program: Write a program to print area of trapezium.
LAB No: 01
Date: 18-09-2016

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){

	float a, b, h, area;

	clrscr();

	printf("Enter the  value of length\n");
	scanf("%f",&a);

	prinft("Enter the  value of base \n");
	sanf("%f",&b);

	printf("Enter  the value of  height \n");
	 sanf("%f",&h);
    //area = 1/2*(a+b)*h;
	 area = 0.5*(a+b)*h;
	 printf("The area of Trapezium is :%f",area);

	 getch();

}
