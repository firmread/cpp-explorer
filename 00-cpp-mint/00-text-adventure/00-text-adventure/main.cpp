//
//  main.cpp
//  00-text-adventure
//
//  Created by Tharit Firm Reed Tothong on 2/20/15.
//  Copyright (c) 2015 Tharit Firm Reed Tothong. All rights reserved.
//

#include <iostream>
using namespace std;

bool theWorldExist = true;
int daysLeftInMyLife = 10000;
string input;

int signification = 0;
int wellLived = 0;

int main() {
    while (theWorldExist) {
        
        // choices
        if (daysLeftInMyLife > 0) {
            cout << endl << "The " << 10000 - daysLeftInMyLife << "th day start..." << endl;
            cout << "What would you like to do?" << endl;
            cout << "work, laugh, or sleep" << endl;
            cin >> input;
        }
        
        
        // inputs
        if (input == "work") {
            signification +=10;
            daysLeftInMyLife -= 1000;
            cout << "1000 days of dedication" << endl;
            cout << "you made +10 significant projects to the world" << endl;
        }
        else if (input == "laugh") {
            wellLived += 10;
            daysLeftInMyLife -= 1000;
            cout << "1000 days of joy" << endl;
            cout << "you made +10 smiles in the world" << endl;
        }
        else if (input == "sleep"){
            daysLeftInMyLife -= 1000;
            cout << "1000 days of eternal nights" << endl;
            cout << "you are ready for tomorrow" << endl;
        }
        
        // the end
        if (daysLeftInMyLife <= 0) {
            cout << endl << "." << endl << "." << endl;
            cout << "life is short..." << endl;
            cout << "you made " << signification << " projects in life" << endl;
            cout << "and " << wellLived << " smiles to the world" << endl;
            cout << "now it's time for your eternal sleep" << endl;
            cout << "... rest in peace , good night ..." << endl;
            
            theWorldExist = false;
        }
    }
}
