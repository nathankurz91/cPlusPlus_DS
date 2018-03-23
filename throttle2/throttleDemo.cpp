/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: throttleDemo.cpp
 * This demonstration shows how the revised throttle class is used
*/

#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS
#include "throttle.h"

using namespace std;
using namespace natCom;

int main() {
    int numPos;
    int shiftPos;

    // Have user enter the number of positions in the throttle
    cout << "Enter the number of positions in your throttle: " << endl;
    cin >> numPos;
    cout << endl;
    throttle userThrottle(numPos);      // Create user throttle

    // Have user indicate what position they would like to switch the throttle
    cout << "Where would you like to switch the throttle?" << endl;
    cin >> shiftPos;
    userThrottle.shift(shiftPos);       // Shift throttle

    // Shift the throttle down to zero, printing the flow along the way
    while(userThrottle.is_on()) {
        cout << "The flow is now " << userThrottle.flow() << endl;
        userThrottle.shift(-1);
    }
    cout << "The flow is now off" << endl;
    return EXIT_SUCCESS;

}