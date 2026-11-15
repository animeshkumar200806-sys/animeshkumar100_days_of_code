// Return the details of the student with the highest marks from a function.
#include <stdio.h>

#define STUDENT_COUNT 5

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int count)
{
    int highest_index = 0;
    int i;

    for (i = 1; i < count; i++)
    {
        if (students[i].marks > students[highest_index].marks)
        {
            highest_index = i;
        }
    }

    return students[highest_index];
}

int main(void)
{
    struct Student students[STUDENT_COUNT];
    struct Student top_student;
    int i;

    for (i = 0; i < STUDENT_COUNT; i++)
    {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    top_student = findTopStudent(students, STUDENT_COUNT);

    printf("\nTop Student Details\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
