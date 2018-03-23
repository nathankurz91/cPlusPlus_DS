/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: point.cpp
 * CLASS IMPLEMENTED: point (see point.h for documentation)
 * 
*/

#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace natCom {
    point::point(double initial_x, double initial_y) {
        // Constructor sets the point to a given position
        x = initial_x;
        y = initial_y;
    }

    void point::shift(double x_amount, double y_amount) {
        x += x_amount;
        y += y_amount;
    }

    void point::rotate90() {
        double new_x;
        double new_y;

        new_x = y;
        new_y = -x;
        x = new_x;
        y = new_y;
    }

    istream& operator >> (istream& ins, point& target) {
        // Postcondition: The x and y coordinates of target have been read
        // from ins. The return value is the istream ins.
        // Library facilities used: iostream
        // Friend of: point class
        ins >> target.x >> target.y;
        return ins;
    }

    double distance(const point& p1, const point& p2) {
        // Value returned is distance between p1 and p2
        // Library facilities used: cmath
        double xDist, yDist, c_squared;

        // Calculate differences in x and y coordinates
        xDist = p1.get_x() - p2.get_x();
        yDist = p1.get_y() - p2.get_y();

        // Use pythagorean theorem to calculate the square of the distance between points
        c_squared = (xDist * xDist) + (yDist + yDist);

        return sqrt(c_squared);
    }

    point middle(const point& p1, const point& p2) {
        // Postcondition: The value returned is the point that is halfway between p1 and p2
        double x_midpoint, y_midpoint;
        
        // Compute x and y midpoints
        x_midpoint = (p1.get_x() + p2.get_x()) / 2;
        y_midpoint = (p1.get_y() + p2.get_y()) / 2;

        // Construct a new point and return it
        point midpoint(x_midpoint, y_midpoint);
        return midpoint;
    }

    bool operator ==(const point& p1, const point& p2) {
        // Postcondition: The value returned is true if p1 and p2 are identical; otherwise
        // false is returned
        return (p1.get_x() == p2.get_x()) && (p1.get_y() == p2.get_y());
    }

    point operator +(const point&p1, const point& p2) {
        // Postcondition: the sum of p1 and p2 is returned
        int new_x = p1.get_x() + p2.get_x();
        int new_y = p1.get_y() + p2.get_y();
        point p3(new_x, new_y);
        return p3;
    }

    bool operator !=(const point& p1, const point& p2) {
        // Postcondition: value returned is true if p1 and p2 are not identical
        return (p1.get_x() != p2.get_x()) || (p1.get_y() != p2.get_y());
    }

    ostream& operator <<(ostream& outs, const point& source) {
        // Postcondition: The x and y coordinates of source have been written to outs. 
        // The return value is the ostream outs. 
        // Library facilities used: iostream
        outs << source.get_x() << " " << source.get_y();
        return outs;
    }
}