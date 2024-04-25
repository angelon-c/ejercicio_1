//
// Created by angel on 4/24/24.
//

#include "Limpieza.h"

Limpieza::Limpieza(std::string _nombre, double _price, std::string _formula, float _liters) : Producto(_nombre,_price){
    formula = _formula;
    liters = _liters;
}
std::string Limpieza::getFormula() {
    return formula;
}
void Limpieza::setFormula(std::string _formula) {
    formula = _formula;
}
float Limpieza::getLiters() {
    return liters;
}
void Limpieza::setLiters(float _liters) {
    liters = _liters;
}
std::string Limpieza ::toString() {
    std::string origianlString = Producto::toString();
    return origianlString + "Formula: " + formula + "Liters: " + std::to_string(liters);
}
