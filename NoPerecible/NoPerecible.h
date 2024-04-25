//
// Created by angel on 4/24/24.
//

#ifndef EJERCICIO_1_NOPERECIBLE_H
#define EJERCICIO_1_NOPERECIBLE_H
#include "../Producto/Producto.h"

class NoPerecible : public Producto{
protected:
    std::string expireDate;
    std::string content;
public:
    NoPerecible(std::string _name,double _price,std::string _expireDate,std::string _content);
    std::string getExpireDate();
    void setExpireDate(std::string _expireDate);
    std::string getContent();
    void setContent(std::string _content);
    std::string toString();

};


#endif //EJERCICIO_1_NOPERECIBLE_H
