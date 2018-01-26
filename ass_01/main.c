/*
Lab title:		Point Lab
Name:			David Kenny
Student Num:	G00070718
date			22/01/2018
Description:	Introdution lab to c++ concepts
*/
#define _CRT_SECURE_NO_WARNINGS
#define Num_of_Structs 4 

#include "tmpMon.h"



int main()
{	
	distance tempvalues[Num_of_Structs];
	
	fill_My_Structs(&tempvalues);
		
	//tempvalues[1].printer_operation(&tempvalues[0], &tempvalues[1], &tempvalues[2], &tempvalues[3]);
	//int struct_num = 0;//variable to pass each struct
	//tempvalues->printer_operation(&tempvalues[struct_num], &tempvalues[struct_num+1], &tempvalues[struct_num+1], &tempvalues[struct_num+1]);
	tempvalues->printer_operation(&tempvalues[Num_of_Structs-4], &tempvalues[Num_of_Structs - 3], &tempvalues[Num_of_Structs - 2], &tempvalues[Num_of_Structs - 1]);
	caluclate_Temp(&tempvalues);	//print average temp of all readings 
	return 0;
}


