/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/
#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

int main() 
{
    int n, i, top_index = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(i = 0; i < n; i++) 
    {
        printf("Enter name, roll number, and marks of student %d: ", i+1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int max_marks = students[0].marks;
    for(i = 1; i < n; i++) 
    {
        if(students[i].marks > max_marks) 
        {
            max_marks = students[i].marks;
            top_index = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[top_index].name, students[top_index].marks);

    return 0;
}
