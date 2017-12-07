//
//  main.cpp
//  Unit-Test
//
//  Created by Justin Myers on 12/6/17.
//  Copyright © 2017 Justin Myers. All rights reserved.
//

#include <iostream>
#include "ApplicationPreferences.hpp"
using namespace AppPref;

int main(int argc, const char * argv[])
{
    //std::cout << "Hello, World!\n";
    GenericPreference pref1("Full Screen", true);
    cout << pref1.getValueString() << endl;
    GenericPreference pref2("Inactivity Timer", 100);
    cout << pref2.getValueString() << endl;
    GenericPreference pref3("Content Scale", 0.5);
    cout << pref3.getValueString() << endl;
    GenericPreference pref4("Name", "JJ");
    cout << pref4.getValueString() << endl;
    
    //cout << "The value of \"" << pref.getKey() << "\" is " << pref.getValue().boolValue << endl;
    return 0;
}
