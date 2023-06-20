#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptr;
    char file_name[10];
    int points;

    printf("Enter the txt file name: \n");
    scanf("%s", file_name);

    int team_count = 0;
    char line[64];

    ptr = fopen(file_name, "r");

    while(fgets(line, sizeof(line), ptr)) {
        team_count++;
    }

    printf("There are %d teams.\n", team_count);

    if (NULL == ptr) {
        printf("Could not access the file. \n");
        return 1;
    }

    int num1;
    ptr = fopen(file_name, "r");
    fscanf(ptr, "%d", &num1);

    while (fgets(line, sizeof(line), ptr)) {
        points = 0;

        for (int i = 0; i < strlen(line); i++) {

            if (line[i] == 'W') {
                points += 3;
            } else if (line[i] == 'D') {
                points += 1;
            } else { //line[i] == 'L'
                //Do not add any points
            }
        }
        printf("Team %d: %d \n", num1, points);
        fscanf(ptr, "%d", &num1);

    }

    fclose(ptr);
    return 0;
}
