#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
// Define a union for the score data
union Score {
    int goals;          // For football
    float avg_runs;     // For cricket
};

// Define the Player structure
struct Player
{
    int pid;
    char pname[50];
    char gametype[20];
    union Score score;
};

// Function to read player records
void readPlayers(struct Player players[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
	printf("Enter details for Player %d:\n", i + 1);
	players[i].pid = i + 1;
	printf("Name: ");
	scanf("%s", players[i].pname);
	printf("Game Type (football/cricket): ");
	scanf("%s", players[i].gametype);

	if (strcmp(players[i].gametype, "football") == 0)
	{
	    printf("Goals: ");
	    scanf("%d", &players[i].score.goals);
	}
	 else if (strcmp(players[i].gametype, "cricket") == 0)
	{
	    printf("Average Runs: ");
	    scanf("%f", &players[i].score.avg_runs);
	}
	else
	{
	    printf("Invalid game type. Please enter football or cricket.\n");
	    i--; // Re-enter details for this player
	}
    }
}

// Function to print player records
void printPlayers(struct Player players[], int n)
{
    int i;
    printf("\nPlayer Records:\n");
    for ( i = 0; i < n; i++) {
	printf("Player %d:\n", players[i].pid);
	printf("Name: %s\n", players[i].pname);
	printf("Game Type: %s\n", players[i].gametype);

	if (strcmp(players[i].gametype, "football") == 0)
	 {
	    printf("Goals: %d\n", players[i].score.goals);
	}
	else if (strcmp(players[i].gametype, "cricket") == 0)
	{
	    printf("Average Runs: %.2f\n", players[i].score.avg_runs);
	}

	printf("\n");
    }
}

// Function to find and print the top scorer in both games to a file
void printTopScorer(struct Player players[], int n, char *filename)
{
    int maxFootballGoals = -1;
    float maxCricketRuns = -1;

    char topFootballPlayer[50];
    char topCricketPlayer[50];
    int i;
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
	printf("Error opening file.\n");
	return;
    }



    for ( i = 0; i < n; i++)
    {
	if (strcmp(players[i].gametype, "football") == 0)
	{
	    if (players[i].score.goals > maxFootballGoals)
	    {
		maxFootballGoals = players[i].score.goals;
		strcpy(topFootballPlayer, players[i].pname);
	    }
	}
	else if (strcmp(players[i].gametype, "cricket") == 0)
	{
	    if (players[i].score.avg_runs > maxCricketRuns)
	    {
		maxCricketRuns = players[i].score.avg_runs;
		strcpy(topCricketPlayer, players[i].pname);
	    }
	}
    }

    fprintf(file, "Top Football Scorer: %s\n", topFootballPlayer);
    fprintf(file, "Top Cricket Scorer: %s\n", topCricketPlayer);

    fclose(file);
}

int main(int argc, char *argv[])
{

    struct Player players[5];
    readPlayers(players, 5);
    printPlayers(players, 5);
    printTopScorer(players, 5, argv[1]);
    if (argc != 2)
    {
	printf("Usage: %s <output_filename>\n", argv[0]);
	return 1;
    }



    return 0;
    getch();
}
