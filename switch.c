#include <stdio.h>

int main() {
    int score;
    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);
    if (score < 0 || score > 100) 
	{
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1; 
    }
	switch (score / 10) 
	{
		case 10:
        case 9:
            printf("The letter grade is: A\n");
            break;
        case 8:
            printf("The letter grade is: B\n");
            break;
        case 7:
            printf("The letter grade is: C\n");
            break;
        case 6:
            printf("The letter grade is: D\n");
            break;
        default:
            printf("The letter grade is: F\n");
            break;
    }

    return 0; 
}

