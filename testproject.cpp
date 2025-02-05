// testproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int max(int a,int b);
int main(int argc, char* argv[])
{
	printf("this is a program for test !\n");
	return 0;
}


int max(int a,int b)
{
	if(a<b){
	
		return b;
	}

	return a;

}