//
//  Game.cpp
//  GridBasedRaycaster
//
//  Created by Michael Edwards on 3/14/17.
//
//

#include "Game.hpp"

using namespace mikedotcpp;

bool Game::init()
{
    //
    // The base class must be initialized first.
    //
    bool result = FPRenderLayer::init();
    
    //
    // Add custom setup code here (loading content, labels, etc.)
    //
    loadMap( "default.json" );
    
    return result;
}
