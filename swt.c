#include<stdio.h>
int main()
	int choice;
    printf("Choose a department:\n");
    printf("1. B.Tech CSE\n");
    printf("2. AIML\n");
    printf("3. ECE\n");
    printf("4. Mechanical\n");
    printf("Enter your choice (1-4): ");
scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose B.Tech CSE\n");
             printf("You chose B.Tech CSE\n");
            break;
	case 2:
            printf("You chose AIML\n");
            break;
	 case 3:
            printf("You chose ECE\n");
            break;
	 case 4:
            printf("You chose Mechanical\n");
            break;
