#include <stdio.h>

#include "Header.h"

/*
Christopher Ferrari
Benchmark Milestone 2
02/16/2021
ITT-310
*/

//printf("Points: %d",points);

//Functions
void calcgs();
void calcts();
void calceff();
//Instantiate Variables
int points;
int assists;
int dreb;
int oreb;
int blocks;
int steals;
int fga;
int fgm;
int fta;
int ftm;
int pfouls;
int turnovers;

int main(int argc, char** argv)
{
	//Test case?

	//Main; prompt
	if (testcase == 0) {
		printf("Welcome to the Basketball advanced stat calculator\n");
		printf("Please proceed with entering player's game statline:\n");

		printf("Points: ");
		scanf_s(" %d", &points);

		printf("Assists: ");
		scanf_s(" %d", &assists);

		printf("Offensive Rebounds: ");
		scanf_s(" %d", &oreb);

		printf("Defensive Rebounds: ");
		scanf_s(" %d", &dreb);

		printf("Blocks: ");
		scanf_s(" %d", &blocks);

		printf("Steals: ");
		scanf_s(" %d", &steals);

		printf("Field Goals Attempted: ");
		scanf_s(" %d", &fga);

		printf("Field Goals Made: ");
		scanf_s(" %d", &fgm);

		printf("Free Throws Attempted: ");
		scanf_s(" %d", &fta);

		printf("Free Throws Made: ");
		scanf_s(" %d", &ftm);

		printf("Personal Fouls: ");
		scanf_s(" %d", &fta);

		printf("Turnovers: ");
		scanf_s(" %d", &ftm);
	}
	else 
	{
			points = 26;
			fgm = 6;
			fga = 21;
			ftm = 14;
			fta = 21;
			oreb = 1;
			dreb = 4;
			steals = 1;
			assists = 10;
			blocks = 1;
			pfouls = 1;
			turnovers = 7;
	}
	

	//Query
	char input;
	int flag = 1;
	do {

		printf("\n\nWhat would you like to calculate?\n");
		printf("A. Game Score\n");
		printf("B. Shooting Percentages\n");
		printf("C. Efficiency Metrics\n");
		scanf_s(" %c", &input, 20);

		//Do while menu loop
		switch (input) {
		case 'A':
			calcgs();
			flag = 0;
			break;
		case 'B':
			calcts();
			flag = 0;
			break;
		case 'C':
			calceff();
			flag = 0;
			break;
		default:
			printf("Invalid input. Please enter again.\n");
		}
	} while (flag == 1);
}
void calcgs()
{

	//Game Score
	printf("\nGame Score:\n");
	printf("%.2f", points + (0.4 * fgm) - (0.7 * fga) - (0.4 * (fta - ftm)) + (0.7 * oreb) + (0.3 * dreb) + steals + (0.7 * assists) + (0.7 * blocks) - (0.4 * pfouls) - turnovers);
}

void calcts()
{
	printf("\nShooting Percentage\n");

	//Field Goals
	printf("Field Goal %%: ");
	printf("%.2f", ((float)fgm / fga) * 100);
	printf("%%\n");

	//Free Throws
	printf("Field Goal %%: ");
	printf("%.2f", ((float)ftm / fta) * 100);
	printf("%%\n");

	//True Shooting
	printf("True Shooting %%: ");
	printf("%.2f", ((float)points / ((2 * fga) + (0.88 * fta))) * 100);
	printf("%%\n");
}

void calceff()
{
	//Assist/TO Ratio
	printf("Assist/Turnover Ratio: ");
	printf("%.2f", ((float)assists/turnovers));
	printf("\n");

	//Efficiency Metric
	printf("Efficiency: ");
	printf("%d", points + dreb + oreb + assists + steals + blocks - (fga-fgm) - (fta-ftm) - turnovers);
	printf("\n");

}