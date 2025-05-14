// 3. Write  a program to create an array for 10 players. For each player store name, no. of 
// matches played, runs, wickets takes.  
// a. Create function to Accept the information of each player.  
// b. Create function to display the information of all the players  
// c. Display the information of player who made maximum runs and the one who took 
// maximum number of wickets. 


#include <stdio.h>
#include <string.h>

typedef struct Player {
    char name[20];
    int matches;
    int runs;
    int wickets;
} Player;

Player Input(Player p[]){
    for(int i=0;i<5;i++){
        printf("Enter detail for player %d",i+1);
        printf("\nName :");
        scanf("%s",&p[i].name);
        printf("Matches :");
        scanf("%d",&p[i].matches);
        printf("Runs :");
        scanf("%d",&p[i].runs);
        printf("Wickets :");
        scanf("%d",&p[i].wickets);
    }
}

void findMaxRunsWickets(Player players[]) {
    int maxRuns = 0, maxWickets = 0;
    int maxRunsIndex = 0, maxWicketsIndex = 0;

    for (int i = 0; i < 5; i++) {
        if (players[i].runs > maxRuns) {
            maxRuns = players[i].runs;
            maxRunsIndex = i;
        }
        if (players[i].wickets > maxWickets) {
            maxWickets = players[i].wickets;
            maxWicketsIndex = i;
        }
    }

    printf("\nPlayer with maximum runs: %s (%d runs)\n", players[maxRunsIndex].name, maxRuns);
    printf("Player with maximum wickets: %s (%d wickets)\n", players[maxWicketsIndex].name, maxWickets);
}

void Display(Player p[]){
    for(int i=0;i<5;i++)
    printf("Name= %s\n Matches= %d\n Runs= %d \nWickets= %d",p[i].name,p[i].matches,p[i].runs,p[i].wickets);
}

int main(){
 Player p[5];
 Input(p);

 printf("\n=== Player Information ===\n");
 Display(p);

 findMaxRunsWickets(p);

 return 0;
}