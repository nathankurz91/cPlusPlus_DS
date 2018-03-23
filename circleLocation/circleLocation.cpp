/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: circleLocation.cpp
 * CLASS IMPLEMENTED: circleLocation (see circleLocation.h for class definition)
*/

#include <cassert>
#include "circleLocation.h"

namespace natCom {
    circleLocation::circleLocation() {
        // Postconditions: position is set to 0
        position = 0;
    }

    circleLocation::circleLocation(int degree) {
        // Postcondition: position is set to pass in variable degree
        position = degree;
    }

    void circleLocation::movePoint(int degree) {
        // Postcondition: point is moved by indicated amount in degree
        position += degree;

        if (position > 359) {
            movePoint(-360);
        } else if (position < 0) {
            movePoint(360);
        }
    }

    int circleLocation::getPos() {
        // Postcondition: current position is returned to function call
        return position;
    }




}