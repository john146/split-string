//
//  split_string.cpp
//  split-string
//
//  Created by John Ahrens on 12/31/19.
//  Copyright © 2019 John Ahrens. All rights reserved.
//

#include <iostream>
#include "split_string.hpp"
#include "split_stringPriv.hpp"

void split_string::HelloWorld(const char * s)
{
    split_stringPriv *theObj = new split_stringPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void split_stringPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

