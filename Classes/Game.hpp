//
//  Game.hpp
//  GridBasedRaycaster
//
//  Created by Michael Edwards on 3/14/17.
//
//

#ifndef Game_hpp
#define Game_hpp

#include "Layers/FPRenderLayer.hpp"

class Game : public mikedotcpp::FPRenderLayer
{
public:
    CREATE_FUNC( Game );
    
    /**
     * Load your map here.
     */
    virtual bool init() override;
};

#endif /* Game_hpp */
