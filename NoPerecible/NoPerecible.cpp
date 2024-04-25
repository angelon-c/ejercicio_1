//
// Created by angel on 4/24/24.
//

#include "NoPerecible.h"

NoPerecible::NoPerecible(std::string _name, double _price, std::string _expireDate, std::string _content) : Producto(_name,_price){
    expireDate = _expireDate;
    content = _content;
}
std::string NoPerecible ::getExpireDate() {
    return expireDate;
}
void NoPerecible::setExpireDate(std::string _expireDate) {
    expireDate = _expireDate;
}
std::string NoPerecible::getContent() {
    return content;
}
void NoPerecible::setContent(std::string _content) {
    content = _content;
}
std::string NoPerecible::toString() {
    std::string origianlString = Producto::toString();
    return origianlString + "Expire Date: " + expireDate + "Content: " + content;
}