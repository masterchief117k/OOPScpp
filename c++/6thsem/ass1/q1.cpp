/*1.1 WAP to create an enum (Day) containing 7 day names as its attributes. Prompt the user to
enter a day number as int type. Assign this day number to a variable of enum Day. Using
switch display the corresponding day name of the given day number. Pass the variable of Day
in switch and make the cases as attributes of Day.*/
#include <iostream> 
using namespace std; 

enum Day{
    Sunday ,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() { 
    int dayNumber;
    cout << "Enter a day number (0-6): ";
    cin >> dayNumber;

    if(dayNumber < 0 || dayNumber > 6) {
        cout << "Invalid day number. Please enter a number between 0 and 6." << endl;
        return 1;
    }

    Day day = static_cast<Day>(dayNumber);

    switch(day) {
        case Sunday:
            cout << "Sunday" << endl;
            break;
        case Monday:
            cout << "Monday" << endl;
            break;
        case Tuesday:
            cout << "Tuesday" << endl;
            break;
        case Wednesday:
            cout << "Wednesday" << endl;
            break;
        case Thursday:
            cout << "Thursday" << endl;
            break;
        case Friday:
            cout << "Friday" << endl;
            break;
        case Saturday:
            cout << "Saturday" << endl;
            break;
    }

    return 0;   


}