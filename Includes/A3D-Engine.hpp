/*
** EPITECH PROJECT, 2021
** A-3D-Engine [WSL: Ubuntu-20.04]
** File description:
** A3D-Engine.hpp
*/

#ifndef ATDENGINE_HPP_
#define ATDENGINE_HPP_

#include <vector>
#include <iostream>
#include <SFML/Graphics.hpp>

namespace td {
class ATDEngine
{
private:
    std::vector<sf::RenderWindow> _winList;
    std::string _gameName;
public:
    ATDEngine(std::string gameName);
    ~ATDEngine();
    int createRenderWin();
    void destroyRenderWin(int Id);
    void displayRenderWin(int Id);
};
} /*td namespace*/

#endif /*ATDENGINE_HPP_*/