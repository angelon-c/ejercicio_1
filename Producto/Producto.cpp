//
// Created by angel on 4/22/24.
//
#include <vector>
#include "Producto.h"
#include <iostream>

Producto::Producto(std::string _name, double _price)
{
    name = _name;
    price = _price;
}

std::string Producto::getName() {
    return name;
}

void Producto::setName(std::string _name) {
    name = _name;
}

double Producto::getPrice() {
    return price;
}

void Producto::setPrice(double _price) {
    price = _price;
}
 std::string Producto::toString() {
     return "Name: " + name + "Price: "  + std::to_string(price);

 }
 void Producto::showProduct() {
    std::string producto = toString();
    std::cout <<producto;
}