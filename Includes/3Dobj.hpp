/*
** Amaury PROJECT, 2022
** A-3D-Engine [WSL: Ubuntu-20.04]
** File description:
** 3Dobj.hpp
*/

#ifndef TDOBJ_HPP_
#define TDOBJ_HPP_

#include "../Includes/Structs.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

namespace td {
    class TDobj {
    private:
        int _id;
        bool _isVisible;
        objPos_t _pos;
        sf::Sprite _sprite;
    public:
        TDobj();
        ~TDobj();
        void renderObj();
        void setPosition(objPos_t pos);
        void setTexture(sf::Texture texture);
        objPos_t getPosition(void);
        void setVisible(bool isVisible);
    };
} /*td namespace*/

#endif /*TDOBJ_HPP_*/