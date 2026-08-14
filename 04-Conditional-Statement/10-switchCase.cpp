/* Switch Statement */
/*
   switch (expression)
{
    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    case value3:
        // statements
        break;

    default:
        // statements if no case matches
} 
*/

#include <iostream>
using namespace std;
int main(){

    int day;
    cout << "enter the day :" << endl;
    cin >> day;

    switch(day){

        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid number";
            break;
        }
    return 0;
}