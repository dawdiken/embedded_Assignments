/*
Lab title:		Assignment 01
Name:			David Kenny
Student Num:	G00070718
date			25/01/2018
Description:	Assignment 01
*/

#ifndef TMPMON_H
#define TMPMON_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//ostream
#include <math.h>


typedef struct DIST
{
	char strName[10];
	float presentTemp;
	float previousTemp;

	void (*printer_operation)();
	
}distance;


void printMeBaby(const struct distance *const tempvalues, const int val);

void calculate_Temp(const struct distance *const tempvalues);

void fill_My_Structs(struct distance *const tempvalues);

#endif /* TMPMON_H */