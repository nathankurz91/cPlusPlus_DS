/**
 * Developer: Nathan Kurz
 * Date: 03/23/2018
 * Source: Data Structures and Other Objects Using C++ 4th Ed. 
 * 
 * FILE: point.h
 * CLASS PROVIDED: point (part of the namespace natCom)
 * 
 * CONSTRUCTOR:
 *      point(double initial_x = 0.0, double initial_y = 0.0)
 *      Postcondition: The point has been set to (intitial_x, initial_y)
 * 
 * MODIFICATION MEMBER FUNCTIONS:
 *      void shift(double x_amount, double y_amount)
 *      Postcondition: The point has been moved x_amount along the x axis and y_amount along the y axis
 * 
 *      void rotate90()
 *      Postcondition: The point has been rotated clockwise 90 degrees around the origin
 * 
 * CONSTANT MEMBER FUNCTIONS:
 *      double get_x() const
 *      Postcondition: The value returned is the x coordinate of the point
 * 
 *      double get_y() const
 *      Postcondition: The value returned is the y coordinate of the point
 * 
 * NONMEMBER FUNCTIONS:
 *      double distance(const point& p1, const point& p2)
 *      Postcondition: The value returned is the distance between p1 and p2
 * 
 *      point middle(const point& p1, const point& p2)
 *      Postcondition: The point returned is halfway between p1 and p2
 * 
 *      point operator +(const point& p1, const point& p2)
 *      Postcondition: The sum of p1 and p2 is returned
 * 
 *      bool operator ==(const point& p1, const point& p2)
 *      Postcondition: Return value is true if p1 and p2 are identical
 * 
 *      bool operator !=(const point& p1, const point& p2)
 *      Postcondition: Return value is true if p1 and p2 are not identical
 * 
 *      ostream& operator <<(ostream& outs, const point& source)
 *      Postcondition: The x and y coordinates of source have been written to outs. The return
 *      value is the ostream outs
 * 
 *      istream& operator >>(istream& ins, point& target)
 *      Postcondition: The x and y coordinates of target have been read from ins. The return value is the istream ins.
 * 
 *  VALUE SEMANTICS:
 *      Assignments and the copy constructor may be used with point objects
*/

#ifndef NATCOM_POINT_H
#define NATCOM_POINT_H
#include <iostream>

namespace natCom {
    class point {
    public:
        // CONSTRUCTOR
        point(double initial_x = 0.0, double inital_y = 0.0);
        // MODIFICATION MEMBER FUNCTIONS
        void shift(double x_amount, double y_amount);
        void rotate90();
        // CONSTANT MEMBER FUNCTIONS
        double get_x() const { return x; }
        double get_y() const { return y; }
        // FRIEND FUNCTION
        friend std::istream& operator >> (std::istream& ins, point& target);
    private:
        double x, y; // x and y coordinates of this point
    };

    // NONMEMBER FUNCTIONS
    double distance(const point& p1, const point& p2);
    point middle(const point& p1, const point& p2);
    point operator +(const point& p1, const point& p2);
    bool operator ==(const point& p1, const point& p2);
    bool operator !=(const point& p1, const point& p2);
    std::ostream& operator <<(std::ostream& outs, const point& source);
}


#endif