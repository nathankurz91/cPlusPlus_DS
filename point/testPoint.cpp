/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: testPoint.cpp
 * This test shows how the point class is used
*/

#include <iostream>
#include <cstdlib>
#include "point.h"

using namespace std;
using namespace natCom;

int main() {
    point p(0.0, 0.0);

    cout << "(" << p.get_x() << "," << p.get_y() << ")" << endl;

    p.shift(2.0, 2.0);

    cout << "(" << p.get_x() << "," << p.get_y() << ")" << endl;

    p.rotate90();

    point p2;

    cin >> p2;

    cout << p2 << endl;

    point p3;

    p3 = p + p2;

    cout << p3 << endl;

    cout << (p == p2) << endl;

    cout << (p != p2) << endl;

}