/**
 * Developer: Nathan Kurz (NatCom)
 * Date: 03/22/2018
 * 
 * FILE: testCircleLocation.cpp
 * This test shows how the circleLocation class is used
*/

#include <iostream>
#include <cstdlib>
#include "circleLocation.h"

using namespace std;
using namespace natCom;

int main() {
    int startPos;
    int movAmnt;

    // Prompt user to enter the starting position of the point
    cout << "Enter staring position, in degrees, of the point: " << endl;
    cin >> startPos;
    circleLocation userCircle(startPos); // create circleLocation object
    cout << "Current position is: " << userCircle.getPos() << endl; // display current position

    // Prompt user to enter rotation amount
    cout << "Enter the amount, in degrees, in which the point will rotate (positive or negative int): " << endl;
    cin >> movAmnt;
    userCircle.movePoint(movAmnt);
    cout << "The position of the point is now " << userCircle.getPos() << endl;
}