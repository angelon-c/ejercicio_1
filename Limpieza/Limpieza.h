//
// Created by angel on 4/24/24.
//

#ifndef EJERCICIO_1_LIMPIEZA_H
#define EJERCICIO_1_LIMPIEZA_H
#include "../Producto/Producto.h"

class Limpieza : public Producto {
protected:
    std::string formula;
    float liters;
public:
    Limpieza(std::string _nombre, double _price, std::string _formula, float _liters );
    std::string getFormula();
    void setFormula(std::string _formula);
    float getLiters();
    void setLiters(float _liters);
    std::string toString();
};


#endif //EJERCICIO_1_LIMPIEZA_H
