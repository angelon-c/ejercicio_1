//
// Created by angel on 4/24/24.
//

#include "Lacteo.h"
#include <string>

Lacteo::Lacteo(std::string _name, double _price, float _amountOfVitamins, float _amountOfProtein ) : Producto(_name,_price){
    amountOfVitamins = _amountOfVitamins;
    amountOfProtein = _amountOfProtein;
}
float Lacteo::getAmountOfVitamin() {
    return amountOfVitamins;
}
void Lacteo::setAmountOfVitamins(float vitamins) {
    amountOfVitamins = vitamins;
}
float Lacteo::getAmountOfProtein() {
    return amountOfProtein;
}
void Lacteo::setAmountOfProtein(float protein) {
    amountOfProtein = protein;
}
std::string Lacteo::toString() {
    std::string origianlString = Producto::toString();

    return  origianlString + "Vitamins: " + std::to_string(amountOfVitamins) + "Protein: " + std::to_string(amountOfProtein);
}


