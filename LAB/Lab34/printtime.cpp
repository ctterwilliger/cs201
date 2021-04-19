// printtime.cpp  INCOMPLETE
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Spring 2018
// Time of Day Class & Program
//
// Modified 11/28/18 for CS 201 Fall 2018
// Chris Hartman

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;


// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

public:
// ***** Time: constructors *****

    Time(int time /* in second */)
        {
            _hr = time / 3600;
            time -= _hr * 3600;
             _min = time / 60;
            time -= _min * 60;
            _sec = time;
        }
    // TODO: Put something here!

// ***** Time: general public member functions *****

    void print() const
    {
        cout << "Your time is: ";
        cout << std::setfill('0') << std::setw(1) << _hr<< ":";
        cout << std::setfill('0') << std::setw(2) << _min<<":";
        cout << std::setfill('0') << std::setw(2) << _sec << ":";
        // TODO: Write this!
    }

// ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    // Make a Time object; print it
    Time t1(4001);
    cout << "Time #1: [";
    t1.print();
    cout << "]" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}

