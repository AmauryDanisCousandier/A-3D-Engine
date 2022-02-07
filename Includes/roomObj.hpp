/*
** Amaury PROJECT, 2022
** A-3D-Engine [WSL: Ubuntu-20.04]
** File description:
** roomObj.hpp
*/

#include <iostream>

namespace td {
    class roomObj {
    private:
        int _id;
        int _xSize;
        int _ySize;
        bool _isPlayerHere;
        bool _isFirstRoom;
        std::string _roomName;
    public:
        roomObj(int sizeX, int sizeY);
        ~roomObj();
        void setName(std::string roomName);
        std::string getName(void);
        void setCurrent(bool isCurrent);
    };
} /*td namespace*/
