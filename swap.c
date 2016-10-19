/*
StudentName: Indra Kumar Chaudhary.
Subject:Programming Fundamentals.
Roll No:
Lab No:
Program : Write a program to swap two numbers.
Date:19-10-2016

*/

#include<stdio.h>

void main(){
	
	int a, b ,temp;
	
	printf("Enter a first value :\n");
	scanf("%d",&a);
	
	printf("Enter a second value :\n");
	scanf("%d",&b);
	
	printf("Before swaped value of a = %d \n",a);
	printf("Before swaped value of b = %d\n", b);

	temp = a;
	
		a = b;
		
		b = temp;
		
	printf("value of temp %d \n", temp);	
	printf("after swaped value of a = %d \n",a);
	printf("after swaped value of b = %d \n", b);


    }
