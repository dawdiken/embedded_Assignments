/*
Lab title:		Assignment 01
Name:			David Kenny
Student Num:	G00070718
date			25/01/2018
Description:	Assignment 01
*/

#include "tmpMon.h"

void fill_My_Structs(distance *const tempvalues)
{
	int i;
	for (i = 0; i < 4; i++) 
	{
		printf("Enter three values for reading %d:\n", i +1 );
		printf("1.The signal name, 2.Previous temperature and 3.Present temperature values:\n");
		scanf("%s", tempvalues[i].strName);
		scanf("%f%f", &tempvalues[i].previousTemp, &tempvalues[i].presentTemp);
		tempvalues[i].printer_operation = printMeBaby;  //set function pointer in each struct to the printMebaby function
	}
}


void calculate_Temp(const distance *const tempvalues)
{
	int i;
	float total_temp = 0;
	float average_temp = 0;
	for (i = 0; i < 4; i++)
	{
		total_temp = total_temp + tempvalues[i].previousTemp;
		total_temp = total_temp + tempvalues[i].presentTemp;
	}
	average_temp = total_temp / (i++*2);//8 values so add 1 to i so it is = to 4 and then multiply 4 by 2 to get 8 which is the num of values read in to all the structs
	printf(" Average Temperature of all readings = %f \n\n", average_temp);
}


void printMeBaby(const distance *const tempvalues, const int val) {


	printf(" Temperature values of Structure: %d \n", val + 1);
	printf(" Measurement Name =  %s \n", tempvalues[val].strName);
	printf(" Present Temperature = %f \n", tempvalues[val].presentTemp);
	printf(" Previous Temperature =  %f\n\n", tempvalues[val].previousTemp);
	
}


