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

typedef  int(*Operation)(int a, int b,int c, int d);//function pointer called Operation

typedef struct DIST
{
	char strName[10];
	float presentTemp;
	float previousTemp;

	Operation printer_operation; // funtion pointer 
	
}distance;


void printMeBaby(struct distance *tempvalues);

void caluclate_Temp(struct distance *tempvalues);

void fill_My_Structs(struct distance *tempvalues);

#endif /* TMPMON_H */