/**
 * Developer: Nathan Kurz
 * Date: 03/22/2018
 * 
 * FILE: throttle.cpp
 * Program utilizes the throttle class
*/

#include <iostream> // Provides cout and cin
#include <cstdlib> // Provides EXIT_SUCCESS
using namespace std;

class throttle {
public:
    // MODIFICATION MEMBER FUNCTIONS
    void shut_off();
    void shift(int amount);
    // CONSTANT MEMBER FUNCTIONS
    double flow() const;
    bool is_on() const;
private:
    int position;
};

int main() {
    throttle sample; // declaration of throttle object called sample
    int user_input;

    // Set the sample throttle to a position indicated by the user
    cout << "I have a throttle with 6 positions." << endl;
    cout << "Where would you like to set the throttle? " << endl;
    cout << "Please type a number from 0 to 6: ";
    cin >> user_input;
    sample.shut_off();
    sample.shift(user_input);

    // Shift the throttle down to zero, printing the flow along the way.
    while (sample.is_on()) {
        cout << "The flow is now " << sample.flow() << endl;
        sample.shift(-1);
    }
    cout << "The flow is now off" << endl;
    return EXIT_SUCCESS;


}

/**
 * Precondition: None
 * Postcondition: The throttle has been turned off.
*/
void throttle::shut_off() {
    position = 0;
}

/**
 * Precondition: shut_off has been called at least once to initialize the throttle.
 * Postcondition: The throttle's position has been moved by amount (but not below 0 or above 6)
*/
void throttle::shift(int amount) {
    position += amount;

    if (position < 0) {
        position = 0;
    } else if (position > 6) {
        position = 6;
    }
}

/**
 * Precondition: shut_off has been called at least once to initialize the throttle
 * Postcondition: The value returned is the current flow as a proportion of the maximum flow
*/
double throttle::flow() const {
    return position / 6.0;
}

/**
 * Precondition: shut_off has been called at least once to initialize the throttle
 * Postcondition: if the throttle's flow is above 0, then the function returns true; 
 * otherwise, it returns false
*/
bool throttle::is_on() const {
    return (flow() > 0);
}
