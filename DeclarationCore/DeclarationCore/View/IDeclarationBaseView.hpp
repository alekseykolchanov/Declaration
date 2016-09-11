//
//  DeclarationBaseView.hpp
//  DeclarationCore
//
//  Created by Aleksei Kolchanov on 11/09/16.
//  Copyright © 2016 Aleksei Kolchanov. All rights reserved.
//

#ifndef DeclarationBaseView_hpp
#define DeclarationBaseView_hpp

#include <stdio.h>

class User;
class DeclarationBaseViewModel;

class IDeclarationBaseView
{
public:
    // pure virtual function
    virtual void setUser(User user) = 0;
    
    
    
};

#endif /* DeclarationBaseView_hpp */
