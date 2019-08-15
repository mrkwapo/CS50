// Creates a Membership HTML page listing members

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "struct.h"

int main(void)
{
    // Space for students
    int memberships = get_int("Memberships: ");
    member members[memberships];

    // Prompt for students' names and dorms
    for (int i = 0; i < memberships; i++)
    {
        members[i].name = get_string("Name: ");
        members[i].email = get_string("Email: ");
        members[i].phone = get_string("Phone: ");
    }

    // Save students to disk
    FILE *file = fopen("members.html", "w");
    if (file)
    {
        for (int i = 0; i < memberships; i++)
        {
            fprintf(file, "<!DOCTYPE html>\n<html>\n<head>\n<meta charset=\"UTF-8\">\n<title>Members</title>\n</head>\n<body>\n%s,%s, %s\n</body>\n</html>\n", members[i].name, members[i].email, members[i].phone);
        }
        fclose(file);
    }
}
