#include <stdio.h>

typedef struct{
    int id;
    char name[51];
    int wins;
    int losses;
} team;

team addTeam();
team updateTeam();
void readTeam();

int main(){
    int count = 0;
    team teams[11];

    team temp;
    char choice[23];
    while (1){
        printf("[Menu]\n 1) Add a New Team\n 2) Update a Team's Record\n 3) Read the Team's Record\n 4) Exit\n");
        
        while (1){
            printf("> Enter your choice [1-4]: ");
            fgets(choice, sizeof(choice), stdin);
            if (strlen(fgets) == 2){
                switch(choice[0]){
                    case '1':
                        temp = addTeam();
                        teams[count] = temp;
                        count++;
                    case '2':
                        updateTeam();
                    case '3':
                        readTeam();
                    case '4':
                        return 0;
                }
                break;
            }
            else{
                printf("> [!] Invalid Choice.");
            }
        }
    }
}