/*
** Amaury PROJECT, 2022
** A-3D-Engine [WSL: Ubuntu-20.04]
** File description:
** main.cpp
*/

#include <iostream>
#include "A3D-Engine.hpp"

int main(void)
{
    td::ATDEngine game("test");
    std::string buffer;
    int winId;

    winId = game.createRenderWin();
    game.displayRenderWin(winId);
    while (1)
    {
        std::cin >> buffer;
        std::cout << buffer << std::endl;
        if (buffer == "exit") break;
    }
    game.destroyRenderWin(winId);
    return (0);
}