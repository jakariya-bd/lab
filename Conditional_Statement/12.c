#include <stdio.h>
#include <math.h>

int main()
{
    int roll, physics_mark, chemistry_mark, computer_mark;
    int total_mark, round_percentage;
    double percentage;

    char name[51];

    printf("Input the Roll Number of the student:");
    scanf("%d", &roll);

    printf("Input the Name of the Student:");
    scanf(" %s", name);

    printf("Input the marks of Physics, Chemistry and Computer Application:");
    scanf(" %d %d %d", &physics_mark, &chemistry_mark, &computer_mark);

    total_mark = physics_mark + chemistry_mark + computer_mark;
    percentage = (total_mark / 300.0) * 100.0;
    round_percentage = (int) percentage;

    printf("Roll No : %d\n", roll);
    printf("Name of Student : %s\n", name);

    printf("Marks in Physics : %d\n", physics_mark);
    printf("Marks in Chemistry : %d\n", chemistry_mark);
    printf("Marks in Computer Application : %d\n", computer_mark);

    printf("Total Marks = %d\n", total_mark);
    printf("Percentage = %.2lf\n", percentage);

    // first >= 60
    // second >= 45, < 60
    // third >= 40, < 45

    printf("Division = ");
    if( round_percentage < 40 ) printf("Failed\n");
    else if( round_percentage < 45 ) printf("Third\n");
    else if( round_percentage < 60 ) printf("Second\n");
    else printf("First\n");

    return 0;
}
