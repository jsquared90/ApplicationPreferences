//
//  GenericPreference.cpp
//  ApplicationPreferences
//
//  Created by Justin Myers on 12/7/17.
//  Copyright © 2017 Justin Myers. All rights reserved.
//

#include "GenericPreference.hpp"
#include <iostream>

using namespace AppPref;
using namespace std;

// destructor
GenericPreference::~GenericPreference()
{
    
}

// key portion of key/value pair
string GenericPreference::getKey()
{
    return _key;
}

// from ennum list of suppoerted value types
GenericPreference::ValueType GenericPreference::getType()
{
    return _type;
}

// returns a struct that contains the specific value of the key/value pair
Value GenericPreference::getValue()
{
    return _value;
}

string GenericPreference::getConsoleString()
{
    string v;
    string t;
    switch (_type)
    {
        case ValueType::Boolean:
            v = _value.boolValue ? "true" : "false";
            t = "Boolean";
            break;
        case ValueType::Integer:
            v = _value.intValue;
            t = "Integer";
            break;
        case ValueType::Double:
            v = _value.doubleValue;
            t = "Double";
            break;
        case ValueType::String:
            v = _value.stringValue;
            t = "String";
            break;
    }
    string s = "The value for " + _key + " is " + v + " (" + t + ")";
    return s;
}
