//
//  ApplicationPreferences.cpp
//  ApplicationPreferences
//
//  Created by Justin Myers on 12/6/17.
//  Copyright © 2017 Justin Myers. All rights reserved.
//

#include "ApplicationPreferences.hpp"
#include <iostream>

using namespace AppPref;

// destructor
ApplicationPreferences::~ApplicationPreferences()
{
    // destroy each preference
    vector<GenericPreference>::iterator begin = _preferences.begin();
    vector<GenericPreference>::iterator end = _preferences.end();
    for (auto i = begin; i < end; ++i)
    {
        delete &i;
    }
}

void ApplicationPreferences::addPreference(const GenericPreference preference)
{
    _preferences.push_back(preference);
}



