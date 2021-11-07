#include <string.h>
#include <iostream>

using namespace std;

char first[100];     // first name
char last[100];      // last name
char full_name[100]; // full version of first and last name
main()
{
    strcpy(first, "Steve");   // Initialize first name
    strcpy(last, "Oualline"); // Initialize last name

    strcpy(full_name, first); // full = "Steve"
    // Note: strcat not strcpy
    strcat(full_name, " ");  // full = "Steve "
    strcat(full_name, last); // full = "Steve Oualline"

    cout << "The full name is " << full_name << '\n';
    return (0);
}