/*
** Amaury PROJECT, 2022
** A-3D-Engine [WSL: Ubuntu-20.04]
** File description:
** 3Dobj.cpp
*/

#include "../Includes/3Dobj.hpp"

td::TDobj::TDobj()
{
}

td::TDobj::~TDobj()
{
}

void td::TDobj::renderObj()
{

}

void td::TDobj::setTexture(sf::Texture texture)
{
    sf::Sprite tmpSprite(texture);

    this->_sprite = tmpSprite;
}

void td::TDobj::setPosition(objPos_t pos)
{
    this->_pos.x_axis = pos.x_axis;
    this->_pos.y_axis = pos.y_axis;
    this->_pos.z_axis = pos.z_axis;
}

objPos_t td::TDobj::getPosition(void)
{
    objPos_t tmp;

    tmp.x_axis = this->_pos.x_axis;
    tmp.y_axis = this->_pos.y_axis;
    tmp.z_axis = this->_pos.z_axis;
    return tmp;
}
void td::TDobj::setVisible(bool isVisible)
{
    this->_isVisible = isVisible;
}