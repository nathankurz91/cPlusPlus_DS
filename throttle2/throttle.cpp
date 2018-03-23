/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: throttle.cpp
 * CLASS IMPLEMENTED: throttle (see throttle.h for documentation)
*/

#include <cassert>  // Provides assert
#include "throttle.h" // Provides the throttle class definition

namespace natCom {

    throttle::throttle() {
        // A simple on-off throttle
        top_position = 1;
        position = 0;
    }

    throttle::throttle(int size) {
        //Library facilities used: cassert
        assert (size > 0);
        top_position = size;
        position = 0;
    }

    void throttle::shift(int amount) {
        // shift throttle to the indicated amount
        position += amount;

        if (position < 0) {
            position = 0;
        } else if (position > top_position) {
            position = top_position;
        }
    }


}