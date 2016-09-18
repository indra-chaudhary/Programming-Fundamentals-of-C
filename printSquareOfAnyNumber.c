/*
  Student Name: Indra Kumar Chaudhary.
  Subject: Programming Fundamentals.
  Program: Write a program to print square of any number.
  Roll:
  LAB: 01
  Date:18-09-2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int number,result;
	clrscr();

	printf("Enter any number \n");
	scanf("%d",&number);

	result = pow(number,2);

	printf("The square of entered number is : %d",result);

	getch();

}
