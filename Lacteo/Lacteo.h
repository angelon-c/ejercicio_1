//
// Created by angel on 4/24/24.
//

#ifndef EJERCICIO_1_LACTEO_H
#define EJERCICIO_1_LACTEO_H


#include <string>
#include "../Producto/Producto.h"

class Lacteo: public Producto {
protected:
    float amountOfVitamins;
    float amountOfProtein;
public:
    Lacteo(std::string _name, double _price, float _amountOfVitamins, float _amountOfProtein );
    float getAmountOfVitamin();
    void setAmountOfVitamins(float vitamins);
    float getAmountOfProtein();
    void setAmountOfProtein(float protein);
   std::string toString() override;



};


#endif //EJERCICIO_1_LACTEO_H
