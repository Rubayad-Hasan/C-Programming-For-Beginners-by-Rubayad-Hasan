
#include <stdio.h>

int main()
{
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100)
        printf("Grade: A\n");

    else if (marks >= 86)
        printf("Grade: A-\n");

    else if (marks >= 82)
        printf("Grade: B+\n");

    else if (marks >= 78)
        printf("Grade: B\n");

    else if (marks >= 74)
        printf("Grade: B-\n");

    else if (marks >= 70)
        printf("Grade: C+\n");

    else if (marks >= 66)
        printf("Grade: C\n");

    else if (marks >= 62)
        printf("Grade: C-\n");

    else if (marks >= 58)
        printf("Grade: D+\n");

    else if (marks >= 55)
        printf("Grade: D\n");

    else
        printf("Grade: F\n");

    return 0;
}
