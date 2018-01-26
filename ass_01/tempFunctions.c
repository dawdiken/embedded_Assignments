#include "tmpMon.h"

void fill_My_Structs(distance * tempvalues)
{
	int i;
	for (i = 0; i < 4; i++) 
	{
		printf("Enter the signal name, previous temperature and present temperature values:\n");
		scanf("%s", tempvalues[i].strName);
		scanf("%f%f", &tempvalues[i].previousTemp, &tempvalues[i].presentTemp);
		tempvalues[i].printer_operation = printMeBaby;
	}
}


void calculate_Temp(distance * tempvalues)
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


void printMeBaby(distance * tempvalues) {

	int ii;
	for (ii = 0; ii<4; ii++)
	{
		printf(" Temperature values of Structure: %d \n", ii + 1);
		printf(" Measurement Name =  %s \n", tempvalues[ii].strName);
		printf(" Present Temperature = %f \n", tempvalues[ii].presentTemp);
		printf(" Previous Temperature =  %f\n\n", tempvalues[ii].previousTemp);
	}

}

