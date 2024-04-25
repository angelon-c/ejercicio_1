//
// Created by angel on 4/22/24.
//

#ifndef EJERCICIO_1_FRUTA_H
#define EJERCICIO_1_FRUTA_H
#include "../Producto/Producto.h"

class Fruta: public Producto {
protected:
    std::string color;
    float weigth;
public:

    Fruta( std::string _name, double _price, std::string _color,float _weight);

    std::string getColor();
    void setColor(std::string _color);
    float getWeigth();
    void setWeigth(float _weigth);
   std::string toString() override;


};


#endif //EJERCICIO_1_FRUTA_H
