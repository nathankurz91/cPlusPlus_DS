/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: circleLocation.h
 * CLASS PROVIDED: circleLocation (part of the namespace natCom)
 *      circleLocation will perform tracking of a point on a circle using angle degrees (0-360)
 * 
 * CONSTRUCTORS:
 *      circleLocation()
 *          Postcondition: Creates a default location with an angle of 0 degrees
 * 
 *      circleLocation(int degree);
 *          Precondition: degree > 0
 *          Postcondition: Creates a location using argument 
 * 
 * MODIFICATION MEMBER FUNCTIONS:
 *      void movePoint(int degree)
 *          Postconditions: point is in the correct location
 * 
 * CONSTANT MEMBER FUNCTIONS:
 *      int getPos()
 *          Postconditions: current location of point is returned
 * 
 * VALUE SEMANTICS:
 *      Assignments and the copy constructor may be used with circleLocation objects
*/

#ifndef NATCOM_CIRCLELOCATION
#define NATCOM_CIRCLELOCATION

namespace natCom {
    class circleLocation {
    public:
        // CONSTRUCTORS
        circleLocation();
        circleLocation(int degree);

        // MODIFICATION MEMBER FUNCTIONS
        void movePoint(int degree);
        
        // CONSTANT MEMBER FUNCTIONS
        int getPos();

    private:
        int position; // Current position of point on circle
    };
}

#endif