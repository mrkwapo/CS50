// Demonstrates structs

#include <cs50.h>
#include <stdio.h>

//custom headerfile
#include "struct.h"

int main(void)
{
    // Space for students
    int enrollment = get_int("Enrollment: ");
    //declaring an array called students with amount of students (in which the user will be prompted and the value will be stored in the variable called enrollment) with datatype of student(which was created in struct.h)
    student students[enrollment];

    // This for loop will prompt for students' names, majors, dorms, and room numbers 
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].major = get_string("Major: ");
        students[i].dorm = get_string("Dorm: ");
        students[i].room = get_string("Room number: ");            
    }

    // Print students' names, majors, dorms, and room numbers  
    for (int i = 0; i < enrollment; i++)
    {
        printf("%s, the %s major, is in %s, room %s.\n", students[i].name, students[i].major, students[i].dorm, students[i].room);
    }
}
