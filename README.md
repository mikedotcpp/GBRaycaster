# Grid-Based Raycaster
A project that adapts the old-school raycast rendering algorithm to be used with Cocos2d-x. Take a look at Game.cpp to see how to load the example map.

## How to use
Clone the repo and put all your game-level code in the class called Game. See the [wiki] (https://github.com/mikedotcpp/GridBasedRaycaster/wiki) for more information on the map format.

**Note** If you are using a different version of Cocos2d-x, you'll need to make the following change to CCMeshCommand.h: 
`virtual void batchDraw();`

## Example Projects
* [CocosWolf3D](https://github.com/mikedotcpp/CocosWolf3D)
* [The Forgotten Tomb](https://github.com/mikedotcpp/TheForgottenTomb)
