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
	
	fill_My_Structs(&tempvalues); //pass structures to function to be populated with data
		
	//tempvalues[1].printer_operation(&tempvalues[0], &tempvalues[1], &tempvalues[2], &tempvalues[3]);
	//int struct_num = 0;//variable to pass each struct
	//tempvalues->printer_operation(&tempvalues[struct_num], &tempvalues[struct_num+1], &tempvalues[struct_num+1], &tempvalues[struct_num+1]);
	tempvalues->printer_operation(&tempvalues);
	calculate_Temp(&tempvalues);	//print average temp of all readings 
	return 0;
}


