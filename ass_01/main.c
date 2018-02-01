/*
Lab title:		Assignment 01
Name:			David Kenny
Student Num:	G00070718
date			25/01/2018
Description:	Assignment 01
*/
#define _CRT_SECURE_NO_WARNINGS
#define Num_of_Structs 4 

#include "tmpMon.h"


int main()
{	
	distance tempvalues[Num_of_Structs]; //make 4 structures here
	while (1) {
		fill_My_Structs(&tempvalues); //pass structures to function to be populated with data
		tempvalues->printer_operation(&tempvalues, 0);//call the print structure of struct 0
		tempvalues->printer_operation(&tempvalues, 1);//call the print structure of struct 1
		tempvalues->printer_operation(&tempvalues, 2);//call the print structure of struct 2
		tempvalues->printer_operation(&tempvalues, 3);//call the print structure of struct 3
		calculate_Temp(&tempvalues);	//call function which callculate the average temp of all readings and print it 
	}
	return 0;
}


