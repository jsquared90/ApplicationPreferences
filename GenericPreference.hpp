//
//  GenericPreference.hpp
//  ApplicationPreferences
//
//  Created by Justin Myers on 12/7/17.
//  Copyright © 2017 Justin Myers. All rights reserved.
//

#ifndef GenericPreference_hpp
#define GenericPreference_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

namespace AppPref
{
    struct Value
    {
        bool boolValue;
        int intValue;
        double doubleValue;
        string stringValue;
        
        void setValue(bool value){boolValue = value;}
        void setValue(int value){intValue = value;}
        void setValue(double value){doubleValue = value;}
        void setValue(string value){stringValue = value;}
    };
    
    class GenericPreference
    {
        
        enum ValueType
        {
            Boolean,
            Integer,
            String,
            Double
        };
        
        string _key;
        ValueType _type;
        Value _value;
        
        GenericPreference(){}
        
    public:
        GenericPreference(const string & key, const bool value);
        GenericPreference(const string & key, const int value);
        GenericPreference(const string & key, const double value);
        GenericPreference(const string & key, const string & value);
        ~GenericPreference();
        
        void setValue(const bool value);
        void setValue(const int value);
        void setValue(const double value);
        void setValue(const string & value);
        
        Value getValue();
        string getKey();
        ValueType getType();
        
        string getConsoleString();
        
    };
    
    // constructor for boolean value
    GenericPreference::GenericPreference(const string & key, const bool value)
    :_key(key)
    {
        _value.setValue(value);
        _type = Boolean;
    }
    
    // constructor for int value
    GenericPreference::GenericPreference(const string & key, const int value)
    :_key(key)
    {
        _value.setValue(value);
        _type = Integer;
    }
    
    // constructor for double value
    GenericPreference::GenericPreference(const string & key, const double value)
    :_key(key)
    {
        _value.setValue(value);
        _type = Double;
    }
    
    // constructor for string value
    GenericPreference::GenericPreference(const string & key, const string & value)
    :_key(key)
    {
        _value.setValue(value);
        _type = String;
    }
}

#endif /* GenericPreference_hpp */
