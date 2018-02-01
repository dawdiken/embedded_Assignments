/*
Lab title:		Assignment 01
Name:			David Kenny
Student Num:	G00070718
date			25/01/2018
Description:	Assignment 01
*/

#include "tmpMon.h"
float count = 0;

void fill_My_Structs(temperature *const tempvalues)
{
	
	int i;
	float *previous;
	int default_to_zero = 0;
	//default previous temp to zero if it is the first time to populate the structs
	for (i = 0; i < 4; i++) 
	{
		if (count < 4) {
			float *default_val = &default_to_zero;
						
			tempvalues[i].previousTemp = *default_val;
			count = count + 1;
		}
		else {
			previous = &tempvalues[i].presentTemp;
			tempvalues[i].previousTemp = *previous;
		}
		
		printf("Enter 2 values for measurment %d:\n", i +1 );
		printf("1.The signal name, 2.Present temperature values:\n");
		scanf("%s", tempvalues[i].strName);
		scanf("%f", &tempvalues[i].presentTemp);
		tempvalues[i].printer_operation = printMeBaby;  //set function pointer in each struct to the printMebaby function
	}
}


void calculate_Temp(const temperature *const tempvalues)
{
	int i;
	float total_temp = 0;
	float average_temp = 0;
	for (i = 0; i < 4; i++)
	{
		total_temp = total_temp + tempvalues[i].previousTemp;
		total_temp = total_temp + tempvalues[i].presentTemp;
	}
	//check to see if its first pass and get true average because there was no past values the first time
	if (count == 4) {
		count = count +  1;
		average_temp = total_temp / (i++);
	}
	else //use the past values if its not the first time because the past values are relevant this time
	{
		average_temp = total_temp / (i++ * 2);//8 values so add 1 to i so it is = to 4 and then multiply 4 by 2 to get 8 which is the num of values read in to all the structs
	}
	
	printf(" Average Temperature of all readings = %.2f \n\n", average_temp);
}


void printMeBaby(const temperature *const tempvalues, const int val) {

	printf(" Temperature values of Structure: %d \n", val + 1);
	printf(" Measurement Name =  %s \n", tempvalues[val].strName);
	printf(" Present Temperature = %.2f \n", tempvalues[val].presentTemp);
	printf(" Previous Temperature =  %.2f\n\n", tempvalues[val].previousTemp);
	
}


