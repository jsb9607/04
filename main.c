#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int year;
	int check;

	printf("input the year : ");
	scanf("%i", &year);

	check = !(year%4) && year%100 || !(year%400);
	printf("is the year %i the leap year? : %i\n", year, check);	
	
	return 0;
}

