#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int second;
	int minute;
	int hour;

	printf("input the second : ");
	scanf("%i", &second);

	hour = second/3600;
	minute = (second%3600)/60;
	printf("The time for %i second is %i : %i :%i\n",second, hour, minute, second%60);
	
	return 0;
}

