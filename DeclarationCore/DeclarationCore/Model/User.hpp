//
//  User.hpp
//  DeveloperCore
//
//  Created by Aleksei Kolchanov on 10/09/16.
//  Copyright © 2016 Aleksei Kolchanov. All rights reserved.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <string>

using namespace std;

class User
{
public:
    string name() {return m_name;}
    void setName(string name) {m_name = name;}
    
private:
    string m_name;
    
};


#endif /* User_hpp */
