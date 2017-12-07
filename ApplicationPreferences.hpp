//
//  ApplicationPreferences.hpp
//  ApplicationPreferences
//
//  Created by Justin Myers on 12/6/17.
//  Copyright © 2017 Justin Myers. All rights reserved.
//

#ifndef ApplicationPreferences_hpp
#define ApplicationPreferences_hpp

#include <stdio.h>
#include <vector>
#include <GenericPreference.hpp>

using namespace std;


namespace AppPref
{
    class ApplicationPreferences
    {
        vector<GenericPreference> _preferences;
    public:
        ApplicationPreferences();
        ApplicationPreferences(vector<GenericPreference> preferences);
        ~ApplicationPreferences();
        void addPreference(const GenericPreference preference);
    };
    
    ApplicationPreferences::ApplicationPreferences()
    {
        _preferences = {};
    }
    
    ApplicationPreferences::ApplicationPreferences(vector<GenericPreference> preferences)
    : _preferences(preferences)
    {
        
    }
    
}

#endif /* ApplicationPreferences_hpp */




