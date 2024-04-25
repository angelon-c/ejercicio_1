//
// Created by angel on 4/22/24.
//

#include "Fruta.h"

Fruta::Fruta(std::string _name, double _price, std::string _color, float _weight) : Producto(_name, _price){

    weigth = _weight;
    color = _color;
}

std::string Fruta::getColor() {
    return color;
}
void Fruta::setColor(std::string _color) {
    color = _color;
}
float Fruta::getWeigth() {
    return weigth;
}
void Fruta::setWeigth(float _weight) {
    weigth = _weight;
}
std::string Fruta::toString() {
    std::string origianlString = Producto::toString();


    return origianlString  + "Color: " + color + "Weight: " + std::to_string(weigth);

}