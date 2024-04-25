//
// Created by angel on 4/22/24.
//

#ifndef EJERCICIO_1_PRODUCTO_H
#define EJERCICIO_1_PRODUCTO_H
#include <string>

class Producto {
private:
    std::string name;
    double price;

public:

    Producto(std::string ,double);
    double getPrice();
    void setPrice(double _price);
    std::string getName();
    void setName(std::string _name);
    virtual std::string  toString();
    void showProduct();
};



#endif //EJERCICIO_1_PRODUCTO_H
