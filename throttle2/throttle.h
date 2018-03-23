/**
 * Developer: Nathan Kurz (NatCom)
 * Date: 03/22/2018
 *      - I rewrote this program so that I could practice creating programs properly 
 *        using a namespace, header file, and implementation file
 * 
 * FILE: throttle.h
 * CLASS PROVIDED: throttle (part of the namespace natCom)
 * 
 * CONSTRUCTORS:
 *      throttle()
 *          Postcondition: The throttle has one position above the shut_off position, 
 *          and it is current shut off
 * 
 *      throttle(int size)
 *          Precondition: size > 0
 *          Postcondition: The throttle has size positions above the shut_off position,
 *          and it is currently shut off
 * 
 * MODIFICATION MEMBER FUNCTIONS:
 *      void shut_off()
 *          Postcondition: The throttle has been turned off
 * 
 *      void shift(int amout)
 *          Postcondition: The throttle's position has been moved by amount (but not below 0 or above the top position)
 * 
 * CONSTANT MEMBER FUNCTIONS:
 *      double flow() const
 *          Postcondition: The value returned is the current flow as a proportion of the maximum flow
 * 
 *      bool is_on() const
 *          Postcondition: If the throttle's flow is above 0 then the function returns true; 
 *          otherwise it returns false
 * 
 * VALUE SEMANTICS 
 *      Assignments and the copy constructor may be used with throttle objects
*/

#ifndef NATCOM_THROTTLE
#define NATCOM_THROTTLE

namespace natCom {
    class throttle {
    public:
        // CONSTRUCTORS
        throttle();
        throttle(int size);
        // MODIFICATION MEMBER FUNCTIONS
        void shut_off() { position = 0;}
        void shift(int amount);
        // CONSTANT MEMBER FUNCTIONS
        double flow() const { return position / double(top_position); }
        bool is_on() const { return (position > 0); }
    private:
        int top_position;
        int position;
    };
}

#endif