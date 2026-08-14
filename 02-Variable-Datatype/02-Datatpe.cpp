/* Datatype */
/*
    In C++, a data type specifies what kind of value a variable can store and how much memory it uses.

    Basic: int, float, double, char, bool, void
    Modified: short, long, long long, signed, unsigned
    Derived: Arrays, pointers, references, functions
    User-defined: struct, class, union, enum, typedef/using

    DataType    Typical Size*	Example Value
    char	    1 byte	        'A'
    bool	    1 byte	        true
    int	        4 bytes	        100
    float	    4 bytes	        3.14f
    double	    8 bytes	        3.14159265
    long long	8 bytes	        1234567890
*/

#include <iostream>
using namespace std;
int main(){
    int age = 21;
    float height = 5.8f;
    double salary = 45000.75;
    char grade = 'A';
    bool passed = true;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;

    return 0;
}