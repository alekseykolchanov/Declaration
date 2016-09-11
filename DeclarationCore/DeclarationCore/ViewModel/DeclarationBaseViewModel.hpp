//
//  DeclarationBaseViewModel.hpp
//  DeclarationCore
//
//  Created by Aleksei Kolchanov on 11/09/16.
//  Copyright © 2016 Aleksei Kolchanov. All rights reserved.
//

#ifndef DeclarationBaseViewModel_hpp
#define DeclarationBaseViewModel_hpp

#include <stdio.h>


#include "Declaration.hpp"
#include "IDeclarationBaseView.hpp"


using namespace std;

class DeclarationBaseViewModel
{
public:
    Declaration m_declaration;
    IDeclarationBaseView *m_view;

    
};

#endif /* DeclarationBaseViewModel_hpp */
