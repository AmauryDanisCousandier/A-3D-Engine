/*
** amaury PROJECT, 2021
** A-3D-Engine [WSL: Ubuntu-20.04]
** File description:
** A3D-Engine.cpp
*/

#include "../Includes/A3D-Engine.hpp"

td::ATDEngine::ATDEngine(std::string gameName)
{
    this->_gameName = gameName;
    std::cout << "- A3D-Engine game initialized succesfully -" << std::endl;
}

td::ATDEngine::~ATDEngine()
{

}